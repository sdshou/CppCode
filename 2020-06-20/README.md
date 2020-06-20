<h2 style="color:blue">06-20</h2>


## 快选 和 快排

### 快选 quick select

1. 给一个数组，找最大数
2. 给一个数组，找第2大
3. 给一个数组，找第5大
4. 给一个数组，找中位数

=> 总结：找第K大，可以考虑用快选算法

算法的时间复杂度：O(n^2) -> O(n)
空间复杂度：O(1)

```
    int findK(int a[], n, left, right){
		if (left == right) return a[left];
		int p = a[left], j = left + 1;
		for (int i = left + 1; i <= right; i++) {
			if (a[i] < p) //跟第j个数字交换
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
				j++; 
			} 
		}
		int t = a[0];
		a[0] = a[j - 1];
		a[j - 1] = t;
		
		if (j == k) return a[j - 1];
		else if (j < k) //右边
		{
			return findK(a, n, j, right);
		}
		else //左边 
		{
			return findK(a, n, left, j - 1);
		}
	} 
```

### 快排 quick sort

利用快选算法做的排序

冒泡排序和找最大的排序 时间复杂度：O(n^2)

算法的时间复杂度：O(n^2) -> O(nlogn)
空间复杂度：O(1)

```
    void sort(int a[], n, left, right){
		if (left >= right) return;
		int p = a[left], j = left + 1;
		for (int i = left + 1; i <= right; i++) {
			if (a[i] < p) //跟第j个数字交换
			{
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
				j++; 
			} 
		}
		int t = a[0];
		a[0] = a[j - 1];
		a[j - 1] = t;
		
		//对左边排序
		sort(a, n, left, j - 2);
		//对右边排序 
		sort(a, n, j, right);
	} 
```