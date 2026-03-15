# NurseSchedulingProblem
A backend for scheduling shifts given constraints.
The project is intended to become gradually more complex as additional constraints types are supported.
At this point, the current status is to be able to schedule shifts within a single week independently of any weeks before or after.
The shifts are assumed to be of uniform length, and once a shift ends, another begins immediately afterwards.

For example: If a shift is 8 hours long, then the shifts are:
Midnight - 8 AM; 8 AM - 4 PM; 4 PM - Midnight.
This continues throughout the week, with Sunday being the first day and Saturday being the last day. (although the choice of the start of the week is arbitrary, and shouldn't cause a significant change in the code)
This way, there are 3 * 7 = 21 shifts over the week that need to be scheduled.
At the moment, we assume that a single nurse is sufficient for the entire shift.

Why is this not sufficient?
With regards to the uniform shift capacity:
* We would like to introduce the possibility where different shifts have different requirements. For example: During day shifts, a nurse / multiple nurses may be required to report to doctors with regards to patients' conditions and consult them for possible treatments, rendering them unavailable to deal with time-critical requests from patients.
With regards to treating all nurses the same way:
* Some nurses may be more experienced than others, and sending an unexperienced nurse to be the only one in a shift may be undesirable, as they may not be able to deal with more complex cases, and the more-experienced nurse may be able to deal with more cases at the same time.


## Copyright
I intend this software to be free for use by anyone who sees it as relevant.
Please credit this repository.

## Liability

This software hasn't been tested in production systems.
If you intend to use this code, please make sure it works properly with your system.
I take no legal responsibility for damages to people or property, nor to a loss of reputation potentially caused by the integration of this software within systems.
