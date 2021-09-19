import math


INT_MAX = 10000

# Given three colinear points p, q, r,
# the function checks if point q lies
# on line segment 'pr'


def onSegment(p: tuple, q: tuple, r: tuple) -> bool:

    if ((q[0] <= max(p[0], r[0])) &
        (q[0] >= min(p[0], r[0])) &
        (q[1] <= max(p[1], r[1])) &
            (q[1] >= min(p[1], r[1]))):
        return True

    return False

# To find orientation of ordered triplet (p, q, r).
# The function returns following values
# 0 --> p, q and r are colinear
# 1 --> Clockwise
# 2 --> Counterclockwise


def orientation(p: tuple, q: tuple, r: tuple) -> int:

    val = (((q[1] - p[1]) *
            (r[0] - q[0])) -
           ((q[0] - p[0]) *
            (r[1] - q[1])))

    if val == 0:
        return 0
    if val > 0:
        return 1  # Collinear
    else:
        return 2  # Clock or counterclock


def doIntersect(p1, q1, p2, q2):

    # Find the four orientations needed for
    # general and special cases
    o1 = orientation(p1, q1, p2)
    o2 = orientation(p1, q1, q2)
    o3 = orientation(p2, q2, p1)
    o4 = orientation(p2, q2, q1)

    # General case
    if (o1 != o2) and (o3 != o4):
        return True

    # Special Cases
    # p1, q1 and p2 are colinear and
    # p2 lies on segment p1q1
    if (o1 == 0) and (onSegment(p1, p2, q1)):
        return True

    # p1, q1 and p2 are colinear and
    # q2 lies on segment p1q1
    if (o2 == 0) and (onSegment(p1, q2, q1)):
        return True

    # p2, q2 and p1 are colinear and
    # p1 lies on segment p2q2
    if (o3 == 0) and (onSegment(p2, p1, q2)):
        return True

    # p2, q2 and q1 are colinear and
    # q1 lies on segment p2q2
    if (o4 == 0) and (onSegment(p2, q1, q2)):
        return True

    return False

# Returns true if the point p lies
# inside the polygon[] with n vertices


def is_inside_polygon(points: list, p: tuple) -> bool:

    n = len(points)

    # There must be at least 3 vertices
    # in polygon
    if n < 3:
        return False

    # Create a point for line segment
    # from p to infinite
    extreme = (INT_MAX, p[1])
    count = i = 0

    while True:
        next = (i + 1) % n

        # Check if the line segment from 'p' to
        # 'extreme' intersects with the line
        # segment from 'polygon[i]' to 'polygon[next]'
        if (doIntersect(points[i],
                        points[next],
                        p, extreme)):

            # # If the point 'p' is colinear with line
            # # segment 'i-next', then check if it lies
            # # on segment. If it lies, return true, otherwise false
            # if orientation(points[i], p,
            #                points[next]) == 0:
            #     return onSegment(points[i], p,
            #                      points[next])

            count += 1

        i = next

        if (i == 0):
            break

    # Return true if count is odd, false otherwise
    return (count % 2 == 1)


def perimiter(points):
    """ returns the length of the perimiter of some shape defined by a list of points """
    distances = get_distances(points)

    length = 0
    for distance in distances:
        length = length + distance

    return length


def get_distances(points):
    """ convert a list of points into a list of distances """
    i = 0
    distances = []
    for i in range(len(points)):
        point = points[i]
        if i < len(points)-1:
            next_point = points[i+1]
        else:
            next_point = points[0]
        x0 = point[0]
        y0 = point[1]
        x1 = next_point[0]
        y1 = next_point[1]

        point_distance = get_distance(x0, y0, x1, y1)
        distances.append(point_distance)

    return distances


def get_distance(x1, y1, x2, y2):
    """ use pythagorean theorm to find distance between 2 points """
    a = x1 - x2
    b = y1 - y2
    c_2 = a*a + b*b

    return math.sqrt(c_2)


T = int(input())
ans = []

for i in range(T):
    N = int(input())
    polygon = []
    for i in range(N):
        polygon.append(tuple([int(x) for x in input().split(" ")]))
    point = tuple([int(x) for x in input().split(" ")])
    ans.append(tuple([is_inside_polygon(
        points=polygon, p=point), round(perimiter(polygon), 6)]))


for i in range(T):
    if ans[i][0]:
        print(f"Case #{i+1}: {ans[i][1]}")
    else:
        print(f"Case #{i+1}: IMPOSSIBLE")
