
Zepto(function($){
  $("a.details").on("click",function(e) {
    var elem = $(e.target).next().removeClass("details-hidden").addClass("details-visible");
    elem.children("div.title").children("span").one("click",function(e) {
      elem.removeClass("details-visible").addClass("details-hidden");
    });
  })
});