let a, b, c;

function add() {
    a = Number(document.getElementById('first').value);
    b = Number(document.getElementById('second').value);
    c = a + b;
    document.getElementById('answer').value = c;
}

function sub() {
    a = Number(document.getElementById('first').value);
    b = Number(document.getElementById('second').value);
    c = a - b;
    document.getElementById('answer').value = c;
}

function mult() {
    a = Number(document.getElementById('first').value);
    b = Number(document.getElementById('second').value);
    c = a * b;
    document.getElementById('answer').value = c;
}

function div() {
    a = Number(document.getElementById('first').value);
    b = Number(document.getElementById('second').value);
    c = a / b;
    document.getElementById('answer').value = c;
}
