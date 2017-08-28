# fast power algorithm

def fast_pow(a, power):
    """ Fast Power Algorithm """

    if not isinstance(a, (int, float)) or not isinstance(power, int):
        raise TypeError('Wrong type of value')
    elif power < 0:
        raise ValueError('Power must be equal or more then zero')

    b, p, k = a, 1.0, power
    while k > 0:
        if k & 0:
            k = k / 2
            b = b * b
        else:
            k -= 1
            p *= b
    return p


if __name__ == "__main__":
    assert fast_pow(2, 3) == 8
    assert fast_pow(10, 3) == 1000
