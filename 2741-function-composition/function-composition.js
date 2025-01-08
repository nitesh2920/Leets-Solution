/**
 * @param {Function[]} functions
 * @return {Function}
 */
var compose = function(anyfunction) {
    
    return function(x) {
        return anyfunction.reduceRight((acc, fn )=>{
            return fn(acc)
        },x)
        
        
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */