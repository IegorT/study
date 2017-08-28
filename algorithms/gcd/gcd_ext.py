# greatest common divisor algorithm extended

def gcd_ext(m, n):
    """ Return the Greatest Common Division and Coefficient of Correlation Greatest Common Division from m and n

    a and b must be integer and one of them mustn't be zero
    """

    if not isinstance(m, int) or not isinstance(n, int):
        raise TypeError('Values must been Integer')
    elif n == 0 and m == 0:
        raise ValueError('One of the value mustn\'t be zero')

    a, b, u1, v1, u2, v2 = m, n, 1, 0, 0, 1

    while b:
        q = a // b
        r = a % b
        a, b = b, r

        t = u2
        u2 = u1 - q * u2
        u1 = t

        t = v2
        v2 = v1 - q * v2
        v1 = t

    return a, u1, v1


if __name__ == "__main__":
    assert gcd_ext(21, 7) == (7, 0, 1)
    assert gcd_ext(7, 5) == (1, -2, 3)
