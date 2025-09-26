// FCFS scheduling
#include <bits/stdc++.h>
using namespace std;

struct Process {
	int pid; // Process ID
	int bt; // CPU Burst time required
	int priority; // Priority of this process
};

// Function to sort the Process acc to priority
bool comparison(Process a, Process b)
{
	return (a.priority > b.priority);
}

// Function to find the waiting time for all processes
void Fwt(Process proc[], int n, int wt[]) //Fwt = Find Waiting Time (proc, size, waiting time)
{
	// waiting time for first process is 0
	wt[0] = 0;

	// waiting time
	for (int i = 1; i < n; i++)
		wt[i] = proc[i - 1].bt + wt[i - 1];
}

// Function to calculate turn around time
void Ftat(Process proc[], int n, int wt[], int tat[])// Ftat = Find turn around time (process, size, waiting time, turn around time)
{
	// calculating turnaround time by adding
	// bt[i] + wt[i] (burst time + waiting time)
	for (int i = 0; i < n; i++)
		tat[i] = proc[i].bt + wt[i];
}

// Function to calculate average time
void Fat(Process proc[], int n) //Fat = findavgTime (processes, size)
{
	int wt[n], tat[n], total_wt = 0, total_tat = 0;

	// Function to find waiting time of all processes
	Fwt(proc, n, wt); //(processes, size, waiting time)

	// Function to find turn around time for all processes
	Ftat(proc, n, wt, tat); //(Processes, size, waiting time, turn around time)

	// Display processes along with all details
	cout << "\nProcesses " << " Burst time " << " Waiting time " << " Turn around time\n";

	// Calculate total waiting time and total turn around time
	for (int i = 0; i < n; i++) {
		total_wt = total_wt + wt[i];
		total_tat = total_tat + tat[i];
		cout << " " << proc[i].pid << "\t\t" << proc[i].bt << "\t "<< wt[i] << "\t\t " << tat[i] << endl;
	}

	cout << "\nAverage waiting time = " << (float)total_wt / (float)n;
	cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}

void Ps(Process proc[], int n) //Ps = priority scheduling (processes, size)
{
	// Sort processes by priority
	sort(proc, proc + n, comparison); //(begin,end,comparison)

	cout << "Order in which processes gets executed " << endl;
	for (int i = 0; i < n; i++)
		cout << proc[i].pid << " ";

	Fat(proc, n); //Fat = Find adg time (Processes, size)
}

int main()
{
	Process proc[] = { { 1, 5, 3 }, { 2, 7, 0 }, { 3, 4, 1 } }; // ID, burst, priority
	int n = sizeof proc / sizeof proc[0]; //Size
	Ps(proc, n); // priority scheduling (processes, size)
	return 0;
}
