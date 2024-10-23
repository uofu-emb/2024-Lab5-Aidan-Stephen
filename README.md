# Lab 9: Realtime - Aidan and Stephen
## Actvity 1: Jitter and Drift
Drift is calculated by dividing the average period by the expected period, then multiplying that by 3600 (the number of seconds in 1 hour). You can then take the difference between the result and 3600 to find the expected drift.
### Delay.c
#### No busy-wait loop
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 200.0016 ms | 200.0016 ms | 199.9992 ms | 1.152 us    | 219        |

Drift over 1 hour: ~0.03s

#### Busy-wait loop
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 204.0024 ms | 204.0024 ms | 204 ms      | 1.2 us      | 200        |

Drift over 1 hour: ~72s

### Sleep.c
#### No busy-wait loop
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 200.0016 ms | 200.0016 ms | 199.9992 ms | 1.056 us    | 200        |

Drift over 1 hour: ~0.03

#### Busy-wait loop
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 205.6008 ms | 205.6008 ms | 205.5984 ms | 1.176 us    | 200        |

Drift over 1 hour: ~100.8s

### Timer.c
#### No busy-wait loop
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 199.9988 ms | 200.0011 ms | 199.9988 ms | 598 ns      | 200        |

Drift over 1 hour: ~0.02s

#### Busy-wait loop
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 200.0016 ms | 200.0016 ms | 199.9992 ms | 1.176 us    | 200        |

Drift over 1 hour: ~0.03s