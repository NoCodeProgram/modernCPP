//std::packaged_task
//should i mention it?? 

//without future concept, packaged_task is difficult to explain
//after future explanation.


//async call as we want

//1. wrap callable object(function,lambda...)

//2. get future by get_future()

//3. run packaged_task. -> function execution ->  in same thread? or seperated?? explicitly???
//check two books. they call thread objects explicitly 

//4. result is served in get()
