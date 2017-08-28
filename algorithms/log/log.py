# logarithm calculation


def log(x, a, eps):
    """Logarithm calculation with epsilon accuracy"""

    if not isinstance(x, (int, float)) or not isinstance(a, (int, float)) or not isinstance(eps, (int, float)):
        raise TypeError("Wrong type of value")
    elif (x <= 0) or (a < 1) or (eps <= 0):
        raise ValueError("The values must be x > 0, a > 1, eps > 0")

    y, z, t = 0.0, x, 1.0
    while abs(t) >= eps or z <= 1.0/a or z >= a:
        if z >= a:
            z /= a
            y += t
        elif z <= 1.0/a:
            z *= a
            y -= t
        else:
            z *= z
            t /= 2.0
    return y

if __name__ == "__main__":
    assert log(1000, 10, 0.00000000001) == 3.0
    assert log(8, 2, 0.0000000000001) == 3.0
