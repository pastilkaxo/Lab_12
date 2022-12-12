(function() {

    // Expand Submenu
    $(".has-dropdown").click(function() {
      event.preventDefault();
      $(this).children('.submenu').toggle(180, "swing", "show");
      $(this).children('.arrow').toggleClass("rotate-180");
    });
  
  })();