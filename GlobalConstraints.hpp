
struct GlobalConstraints {
	unsigned int hours_per_shift;
	/* This assumes a global, legal limit for rest between shifts. This may be unrealistic if a nurse
	 * requires additional accommodation for health reasons. */
	unsigned int minimum_hours_between_shifts;
	/* At this point, for simplicity, there is no distinction between nurses, so the constraint
	 * only considers their number. */
	unsigned int number_of_nurses;
};

