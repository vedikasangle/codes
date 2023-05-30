const http = require('http');

// Create a server object
const server = http.createServer((req, res) => {
  // Set the response header
  res.writeHead(200, { 'Content-Type': 'text/plain' });

  // Send a response to the client
  res.write('Hello, world!');
  res.end();
});

// Define the port to listen on
const port = 5500;

// Start the server and listen on the specified port
server.listen(port, () => {
  console.log(`Server running on port ${port}`);
});

//to run : go to directory and type "node server.js"
//then check : http://localhost:5500/
