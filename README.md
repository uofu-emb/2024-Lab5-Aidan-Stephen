# Lab 9: Realtime - Aidan and Stephen
## Actvity 1: Jitter and Drift
#### Note: These samples were taken while the on-board LED was flashing, which may add some variability
### Delay.c
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 200.7529 ms | 202.0022 ms | 199.9996 ms | 695.082 us  | 500        |
| Frequency   | 4.98127 Hz  | 5.00003 Hz  | 4.95049 Hz  | 17.2168 mHz | 500        |
| Duty Cycle  | 50%         | 50.26%      | 49.75%      | 0.16%       | 500        |

Drift over 1 hour: ~13.5s

### Sleep.c
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 200.9141 ms | 202.0022 ms | 199.9996 ms | 703.204 us  |            |
| Frequency   | 4.97736 Hz  | 5.00003 Hz  | 4.95049 Hz  | 17.4036 mHz |            |
| Duty Cycle  | 50%         | 50.25%      | 49.75%      | 0.18%       |            |

Drift over 1 hour: 

### Timer.c
| Measurement | Average     | Max         | Min         | Std. Dev.   | Wave Count |
|-------------|-------------|-------------|-------------|-------------|------------|
| Period      | 200.9141 ms | 202.0022 ms | 199.9996 ms | 703.204 us  |            |
| Frequency   | 4.97736 Hz  | 5.00003 Hz  | 4.95049 Hz  | 17.4036 mHz |            |
| Duty Cycle  | 50%         | 50.25%      | 49.75%      | 0.18%       |            |

Drift over 1 hour: