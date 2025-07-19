/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {

    const s = new Set();
    // return s.size !== nums.length

    for(let n of nums){
        if(s.has(n))
            return true;
         s.add(n);   
    }
    return false;


};