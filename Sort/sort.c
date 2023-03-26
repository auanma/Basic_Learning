#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void MyPrint(int num[], int n);
void bubble (int num[],int n);
void selection (int num[],int n);
void insertion (int num[],int n);
void mergesort (int num[],int l,int r);
void merge(int arr[], int l, int m, int r);
void quick (int num[],int l,int h);
int partition (int arr[], int low, int high);
void swap(int* a, int* b);

int main(int argc, char *argv[])
{
	int n,i,j,ch;
	int num[10000];
	char FileOutput[50];
    FILE *fpin, *fpout;

    if(argc != 2)
    {
        printf("Usage: program filename.txt\n");
        exit(1);
    }

    fpin = fopen(*(argv+1), "r");
    if(fpin==NULL)
	{
		printf("File not exist");
	}
	else
	{   /* Read data in the first line (number of data) */
		fscanf(fpin, "%d\n", &n);
	}

	for( i = 0; i < n; i++)
	{
		fscanf(fpin, "%d\n", &num[i]);
	}

	printf(">>>>>> Main Menu <<<<<<\n");
	printf("1. Bubble Sort\n");
	printf("2. Selection Sort\n");
	printf("3. Insertion Sort\n");
	printf("4. Merge Sort\n");
	printf("5. Quick Sort\n");
	printf("\n\n");
	printf("Please press your choice : ");
	scanf("%d",&ch);
	printf("\n");

     clock_t start, end;
    double cpu_time_used;

    start = clock(); // start timer

	switch(ch)
	{
		case 1 :
			bubble(num,n);
			break;
		case 2 :
			selection(num,n);
			break;
		case 3 :
			insertion(num,n);
			break;
		case 4 :
			mergesort(num,0,n-1);
			break;
		case 5 :
			quick(num,0,n-1);
			break;
		default :
            printf("Please try again!!\n" );
	}

    end = clock(); // end timer
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Time taken: %f seconds\n", cpu_time_used);

    strcpy(FileOutput,*(argv+1));
    strcat(FileOutput, ".out");
   	fpout = fopen(FileOutput, "w");
	for( i = 0; i < n; i++)
	{
		fprintf(fpout, "%d\n", num[i]);
    }

    
    fclose(fpin);
	fclose(fpout);
	return(0);
}

/*///////////////////////////////////////////////BUBBLE SORT///////////////////////////////////////////////*/
void MyPrint(int num[], int n)
{
    int i;
    for( i = 0; i < n; i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n\n");
}

void bubble (int num[],int n)
{
	 int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (num[j] > num[j+1]) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
}
/*////////////////////////////////////////////////SELECTION SORT////////////////////////////////////////////////*/
void selection (int num[],int n)
{
	int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (num[j] < num[min_idx]) {
                min_idx = j;
            }
        }
        temp = num[i];
        num[i] = num[min_idx];
        num[min_idx] = temp;
    }
}
/*/////////////////////////////////////////INSERTION SORT/////////////////////////////////////////////////////*/
void insertion (int num[],int n)
{
	int i, key, j;
    for (i = 1; i < n; i++) {
        key = num[i];
        j = i - 1;

        // Move elements of num[0..i-1], that are
        // greater than key, to one position ahead
        // of their current position
        while (j >= 0 && num[j] > key) {
            num[j + 1] = num[j];
            j = j - 1;
        }
        num[j + 1] = key;
    }
}
/*//////////////////////////////////////////////////MERGE SORT/////////////////////////////////////////////////////*/
void mergesort (int num[],int l,int r)
{
	if (l < r) {
        int m = l + (r - l) / 2;

        // Sort first and second halves
        mergesort(num, l, m);
        mergesort(num, m + 1, r);

        // Merge the sorted halves
        merge(num, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r)
{
   int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    // Merge the temporary arrays back into arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
/*////////////////////////////////////////////QUICK SORT/////////////////////////////////////////////////////*/
void quick (int num[],int l,int h)
{
	 if (l < h) {
        // pi is partitioning index, arr[p] is now at right place
        int pi = partition(num, l, h);

        // Separately sort elements before partition and after partition
        quick(num, l, pi - 1);
        quick(num, pi + 1, h);
    }
}
int partition (int arr[], int low, int high)
{
     int pivot = arr[high]; // Pivot element
    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++; // Increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
