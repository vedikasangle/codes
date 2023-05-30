const http = require('http');
const fs = require('fs');
const path = require('path');

const server = http.createServer((req, res) => {
  // Extract the URL path
  let filePath = '.' + req.url;
  
  // Set the default file to serve as index.html
  if (filePath === './')
    filePath = './index.html';

  // Get the file extension to set the content type
  let extname = path.extname(filePath);
  let contentType = getContentType(extname);

  // Read the file from the file system
  fs.readFile(filePath, (err, content) => {
    if (err) {
      // File not found
      if (err.code === 'ENOENT') {
        res.writeHead(404, { 'Content-Type': 'text/html' });
        res.end('<h1>404 Not Found</h1>');
      } else {
        // Server error
        res.writeHead(500, { 'Content-Type': 'text/html' });
        res.end('<h1>500 Internal Server Error</h1>');
      }
    } else {
      // Serve the file
      res.writeHead(200, { 'Content-Type': contentType });
      res.end(content);
    }
  });
});

// Define the port to listen on
const port = 3000;

// Start the server and listen on the specified port
server.listen(port, () => {
  console.log(`Static website server running on port ${port}`);
});

// Helper function to determine the content type based on file extension
function getContentType(extname) {
  switch (extname) {
    case '.html':
      return 'text/html';
    case '.css':
      return 'text/css';
    case '.js':
      return 'text/javascript';
    case '.png':
      return 'image/png';
    case '.jpg':
    case '.jpeg':
      return 'image/jpeg';
    default:
      return 'application/octet-stream';
  }
}

//to run, go to directory and type : "node server.js"
//then go to http://localhost:3000/
