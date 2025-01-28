// const optionBox=document.getElementsByClassName("option")
// const correctOption1="Beijing"

// for(let i=0;i<=optionBox.length;i++)
// {
//    optionBox[i].addEventListener("click", checkSelection);
// }

// optionBox[i].addEventListener("click", checkSelection);
// function checkSelection(event)
// {

//     // if(event.target.value===correctOption1)
//     //     alert("Correct Option");
    
//     console.log(event.target)
// }
// console.log(optionBox.length);

const incorrectOptions=document.querySelectorAll(".incorrectOption")

for(let i=0;i<incorrectOptions.length;i++)
{
    incorrectOptions[i].addEventListener("click",function()
{ 
    incorrectOptions[i].style.backgroundColor='Red'
    // incorrectOptions[i].classList.(".right");

})
}

const correctOption=document.querySelectorAll(".correctOption")

    for(let i=0;i<correctOption.length;i++)
    {
       correctOption[i].addEventListener("click",function()
    {
        correctOption[i].style.backgroundColor='rgb(0, 255, 81)'

        // alert("Right Answer");
        //correctOption[i].classList.toggle("right")
    })
    }


    const checkInput=document.querySelector("#check-btn");
    
 checkInput.addEventListener("click", function(event)
{
    const userInput=document.querySelector("#input");

    if(userInput.value.toLowerCase()==="meghalaya")
    {
        userInput.style.backgroundColor='rgb(0, 255, 81)'
        alert("Right Answer!")
    }

    else{
         userInput.style.backgroundColor='Red';
         alert("Wrong Answer!")
    }
})



