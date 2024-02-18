let ul = document.querySelector("ul");
let inp = document.querySelector("input");
let btn = document.querySelector("button");

btn.addEventListener("click", function() {
    let item = document.createElement("li");
    item.innerText = inp.value;

    let delBtn = document.createElement("button");
    delBtn.innerText = "delete";
    delBtn.classList.add("delete");

    let doneBtn = document.createElement("button");
    doneBtn.innerText = "done";
    doneBtn.classList.add("done");

    item.appendChild(delBtn);
    item.appendChild(doneBtn);
    let ul = document.querySelector("ul");
    let inp = document.querySelector("input");
    let btn = document.querySelector("button");
    
    btn.addEventListener("click", function() {
        let item = document.createElement("li");
        item.innerText = inp.value;
    
        let delBtn = document.createElement("button");
        delBtn.innerText = "delete";
        delBtn.classList.add("delete");
    
        let doneBtn = document.createElement("button");
        doneBtn.innerText = "done";
        doneBtn.classList.add("done");
    
        item.appendChild(delBtn);
        item.appendChild(doneBtn);
    
        ul.appendChild(item);
        inp.value = "";
    });
    
    ul.addEventListener("click", function(event) {
        if (event.target.classList.contains("delete")) {
            let parentElement = event.target.parentNode;
            parentElement.remove();
        } else if (event.target.classList.contains("done")) {
            let parentElement = event.target.parentNode;
            parentElement.classList.add("strike");
            event.target.checked = true;
        }
    });
    
    ul.appendChild(item);
    inp.value = "";
});

ul.addEventListener("click", function(event) {
    if (event.target.classList.contains("delete")) {
        let parentElement = event.target.parentNode;
        parentElement.remove();
    } else if (event.target.classList.contains("done")) {
        let parentElement = event.target.parentNode;
        parentElement.classList.add("strike");
        event.target.checked = true;
    }
});
