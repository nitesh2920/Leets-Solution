/**
 * @param {string} val
 * @return {Object}
 */
var expect = function (val) {
    return {
        toBe: (data) => {
            if (val === data)
                return true;
            else {
                throw new Error("Not Equal")
            }
        },
        notToBe: (data2) => {
            if (data2 !== val)
                return true;
            else {
                throw new Error('Equal')
            }
        }
    }

    
};

/**
 * expect(5).toBe(5); // true
 * expect(5).notToBe(5); // throws "Equal"
 */