// Shortest Remaining Time First (SRTF)

#include <bits/stdc++.h>
using namespace std;

struct Process {
	int pid; // Process ID
	int bt; // Burst Time
	int art; // Arrival Time
};

// Function to find the waiting time for all processes
void Fwt(Process proc[], int n, int wt[])//Fwt = Find waiting time (processes, size, waiting time)
{
	int rt[n];//Burst time copy

	// Copy the burst time into rt[]
	for (int i = 0; i < n; i++)
		rt[i] = proc[i].bt;

	int complete = 0, t = 0, minm = INT_MAX;
	int shortest = 0, finish_time;
	bool check = false;

	// Process until all processes gets completed
	while (complete != n) {

		// Find process with minimum remaining time among the processes that arrives till the current time
		for (int j = 0; j < n; j++) {
			if ((proc[j].art <= t) && (rt[j] < minm) && rt[j] > 0) {
				minm = rt[j];
				shortest = j;
				check = true;
			}
		}

		if (check == false) {
			t++;
			continue;
		}

		// Reduce remaining time by 1
		rt[shortest]--;

		// Update minimum
		minm = rt[shortest];
		if (minm == 0)
			minm = INT_MAX;

		// If a process gets completely executed
		if (rt[shortest] == 0) {

			// Increment complete
			complete++;
			check = false;

			// Find finish time of current process
			finish_time = t + 1;

			// Waiting time
			wt[shortest] = finish_time - proc[shortest].bt - proc[shortest].art;

			if (wt[shortest] < 0)
				wt[shortest] = 0;
		}
		// Increment time
		t++;
	}
}

// Function to calculate turn around time
void Ftat(Process proc[], int n, int wt[], int tat[]) //Ftat =Find Turn Around Time (process, size, waiting time, turn around time)
{
	// calculating turnaround time by adding
	// bt[i] + wt[i] (burst time + waiting time)
	for (int i = 0; i < n; i++)
		tat[i] = proc[i].bt + wt[i];
}

// Function to calculate average time
void Fat(Process proc[], int n) //Fat = Find avg time (process, size)
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	// Function to find waiting time of all processes
	Fwt(proc, n, wt); //(process,size, waiting time)

	// Function to find turn around time for all processes
	Ftat(proc, n, wt, tat); //(process, size, waiting time, turn around time)

	// Display processes along with all details
	cout << " P\t\t" << "BT\t\t" << "WT\t\t" << "TAT\t\t\n";

	// Calculate total waiting time and total turnaround time
	for (int i = 0; i < n; i++) {
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << proc[i].pid << "\t\t" << proc[i].bt << "\t\t " << wt[i] << "\t\t " << tat[i] << endl;
	}

	cout << "\nAverage waiting time = " << (float)total_wt / (float)n;
	cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}

int main()
{
	Process proc[] = { { 1, 5, 2 }, { 2, 3, 5 }, { 3, 9, 1 }, { 4, 3, 0}, {5, 7, 4} };
	int n = sizeof(proc) / sizeof(proc[0]);

	Fat(proc, n); //(process, size)
	return 0;
}
