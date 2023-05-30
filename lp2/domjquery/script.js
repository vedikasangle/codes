$(document).ready(function() {
    // Function to update the message
    function updateMessage() {
      $('#message').text('New Message');
    }
  
    // Event handler for the button click
    $('#updateButton').click(function() {
      updateMessage();
    });
  });
  
