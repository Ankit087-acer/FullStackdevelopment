// function add(a,b){
//     return a+b;
// }
// function sub(a,b){
//     return a-b;
// }
// module.exports={
//     add, sub
// };
//2nd option
// module.exports={
//     addfn:add,
//     subfn:sub,
// }

//3rd option
module.exports={
    add:(a,b)=>a + b,
    sub:(a,b)=>a-b
};