    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        return sum(max(abs(cur[0] - prev[0]), abs(cur[1] - prev[1])) for cur, prev in zip(points, points[1 :]))