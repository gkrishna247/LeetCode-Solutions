struct Interval {
    int start;
    int end;
};

int cmp(const void* a, const void* b) {
    return ((struct Interval*)a)->start - ((struct Interval*)b)->start;
}

struct Interval* merge(struct Interval* intervals, int intervalsSize, int* returnSize) {
    if (intervalsSize == 0) {
        *returnSize = 0;
        return NULL;
    }
    qsort(intervals, intervalsSize, sizeof(struct Interval), cmp);
    struct Interval* res = malloc(intervalsSize * sizeof(struct Interval));
    *returnSize = 0;
    res[(*returnSize)++] = intervals[0];
    for (int i = 1; i < intervalsSize; i++) {
        if (res[*returnSize - 1].end >= intervals[i].start) {
            res[*returnSize - 1].end = fmax(res[*returnSize - 1].end, intervals[i].end);
        } else {
            res[(*returnSize)++] = intervals[i];
        }
    }
    return res;
}
