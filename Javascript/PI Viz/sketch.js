const turtle = {
    pos: {
        x: 0,
        y: 0
    },
    angle: 0,
    stroke: true,
    color: {
        h: 0,
        s: 255,
        b: 255
    }
};
const width = 6000;
const height = 4000;
const totalDigits = 1000000;
let digitCount = 0;

function setup() {
    createCanvas(width, height);
    colorMode(HSB);
    console.log(pi.length);
    translate(width / 2, height / 2);
    background(0);
    strokeWeight(3);
    stroke(turtle.color.h, turtle.color.s, turtle.color.b);
    point(turtle.pos.x, turtle.pos.y);

}

function draw() {
    translate(width / 2, height / 2);
    strokeWeight(2);
    for (let i = 0; i < 10000; i++) {
        let digit = pi.charAt(digitCount);
        turtle.color.h = map(digitCount, 0, totalDigits, 0, 359);
        stroke(turtle.color.h, turtle.color.s, turtle.color.b);
        forward(digit * 0.4);
        turn(36 * digit - 90);

        digitCount++;
        if (digitCount == totalDigits)
            noLoop();
    }
}

function forward(dist) {
    let newPos = {
        x: 0,
        y: 0
    };
    let x = dist * cos(turtle.angle);
    let y = dist * sin(turtle.angle);
    newPos.x += x + turtle.pos.x;
    newPos.y += y + turtle.pos.y;
    if (turtle.stroke)
        line(turtle.pos.x, turtle.pos.y, newPos.x, newPos.y);
    turtle.pos = newPos;
}

function turn(angle) {
    angle *= Math.PI / 180;
    turtle.angle += angle;
}