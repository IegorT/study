# greatest common divisor algorithm


def gcd(m, n):
    """ Return the Greatest Common Division

    a and b must be integer and one of them mustn't be zero
    """

    if not isinstance(m, int) or not isinstance(n, int):
        raise TypeError('Values must been Integer')
    elif n == 0 and m == 0:
        raise ValueError('One of the value mustn\'t be zero')

    if m > n:
        a, b = m, n
    else:
        a, b = n, m
    while b:
        r = a % b
        a, b = b, r
    return a

""" or recursion style : 
gcd = lambda m, n: m if n == 0 else gcd(n, m % n)
"""


if __name__ == "__main__":
    assert gcd(26, 35) == 1
    assert gcd(35, 7) == 7
