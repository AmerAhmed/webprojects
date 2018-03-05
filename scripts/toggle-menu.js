(function () {
  "use strict";
  //skap kanppen som visar/dölj menyn:
  $(".tagline").html("<button>Visa menyn</button>");
  //Lagra åtkomst till kanppen i en varaibel:
  var button = $(".tagline > button");
  //Lagra åtkomst till menyn i en varaibel:
  var menu = $(".menu");
  //När någon klickar på kanppen:
  button.click(function() {
    //Om menyn redan visas:
    if (menu.hasClass("show")) {
      //Ska den döljas:
      menu.removeClass("show");
      //Och ändra kanppens text:
      button.html("Visa menyn");
    } else {
      //Annars ska den visas:
      menu.addClass("show");
      //och kanppens text ändras
      button.html("Dölj menyn");
    }
  });
}());
