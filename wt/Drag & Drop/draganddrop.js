var diffX, diffY, element;
//initially invoked on grab
function grabber(event) {
  element = event.currentTarget;
  var posX = parseInt(element.style.left);
  var posY = parseInt(element.style.top);
    //assign event listeners for mousemove and mouseup event
  document.addEventListener("mousemove", mover);
  document.addEventListener("mouseup", dropper);
  event.stopPropagation();
  event.preventDefault();
}
//mover function(called while dragging the element)
function mover(event) {
  element.style.left = event.clientX  + "px";
  element.style.top = event.clientY + "px";

  event.stopPropagation();
}
//invoked on dropping the element
function dropper(event) {
  document.removeEventListener("mousemove", mover);
  document.removeEventListener("mouseup", dropper);
  event.stopPropagation();
}
