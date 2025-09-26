// Round Robin
#include<bits/stdc++.h>
using namespace std;

// Function to find the waiting time for all
// processes
void Fwt(int processes[], int n, int bt[], int wt[], int quantum) // Fwt = Find waiting time, bt = burst time, wt = waiting time
{

	int rem_bt[n]; //copy of burst times bt[]
	for (int i = 0 ; i < n ; i++)
		rem_bt[i] = bt[i];

	int t = 0; // Current time

	// Loop traversing processes in round robin until all of them are not done.
	while (1)
	{
		bool done = true;

		// Traverse all processes 1 by 1 repeatedly
		for (int i = 0 ; i < n; i++)
		{
			// If burst time of a process > 0 then only need to process further
			if (rem_bt[i] > 0)
			{
				done = false; // Pending process

				if (rem_bt[i] > quantum)
				{
					// Increase time shows many time processed
					t += quantum;

					// Decrease the burst_time of current process by quantum
					rem_bt[i] -= quantum;
				}

				// If burst time <= quantum. The last cycle for this process
				else
				{
					// Increase the value of t
					t = t + rem_bt[i];

					// Waiting time = current time - time used by this process
					wt[i] = t - bt[i];

					// The process gets fully => burst time = 0
					rem_bt[i] = 0;
				}
			}
		}

		// If all processes are done
		if (done == true)
		break;
	}
}

// Function to calculate turn around time
void Ftat(int processes[], int n, int bt[], int wt[], int tat[]) //Ftat = Find Turn Around Time, tat = Turn Around Time
{
	// calculate turnaround time by adding
	// bt[i] + wt[i] burst time + waiting time
	for (int i = 0; i < n ; i++)
		tat[i] = bt[i] + wt[i];
}

// Function to calculate avg time
void Fat(int processes[], int n, int bt[], int quantum) // Fat = Find avg time
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	// Function to find waiting time of all processes
	Fwt(processes, n, bt, wt, quantum); //(processes, size of processes , burst time, waiting time, quantum)

	// Function to find turn around time for all processes
	Ftat(processes, n, bt, wt, tat); //(processes, size of processes , burst time, waiting time, turnaround time)

	// Display processes along with all details
	cout << "PN\t "<< " \tBT " << "  WT " << " \t TAT\n";

	// Total waiting time and total turn around time
	for (int i=0; i<n; i++)
	{
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << i+1 << "\t\t" << bt[i] <<"\t " << wt[i] <<"\t\t " << tat[i] <<endl;
	}

	cout << "Average waiting time = " << (float)total_wt / (float)n << endl;
	cout << "Average turn around time = " << (float)total_tat / (float)n;
}

int main()
{
	// Input
	// Processes
	int processes[] = { 1, 2, 3};
	int n = sizeof processes / sizeof processes[0]; // Size

	// Burst time of all processes
	int burst_time[] = {10, 30, 20};

	// Time quantum
	int quantum = 2;
	Fat(processes, n, burst_time, quantum);
	return 0;
}
