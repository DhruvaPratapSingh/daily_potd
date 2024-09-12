// const fun=()=>{
//     let val=10;
//     const fun1=()=>{
//         let val1=20;
//         const fun2=()=>{
//             let val2=30;
//             const fun3=()=>{
//                 console.log("val2 is  : ",val2);
//                 console.log("val1 is  : ",val1);
//                 console.log("val is  : ",val);
//             }
//             return fun3;
//         }
//         return fun2;
//     }
//     return fun1;
// }
// const helper=fun();
// const helper1=helper();
// const helper2=helper1();
// helper2();

const fun=(...nrr)=>{
    return nrr.reduce((acc,num)=>acc+num);
}
const arr=[1,2,3,4,5];
const nrr=[9,8,7];
console.log(fun(nrr));
