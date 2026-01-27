const btns = document.querySelectorAll(".tab");
const panels = document.querySelectorAll(".panel");

btns.forEach((btn, index) => {
  btn.addEventListener("click", function () {
    panels.forEach((panel) => {
      panel.style.display = "none";
    });

    const num = btn.getAttribute("data-num");

    let output = "";
    for (let i = 1; i <= 10; i++) {
      output += `${num} x ${i} = ${num * i}\n`;
    }

    panels[index].style.display = "block";
    panels[index].innerText = output;
  });
});
