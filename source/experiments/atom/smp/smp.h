#include <stdbool.h>
#include <stdint.h>



void smp();

extern struct {  /* state */
  struct {  /* smp */
    uint64_t __channel_s2r_1;
    bool __channel_s2r_1_ready;
    uint64_t __channel_s2r_2;
    bool __channel_s2r_2_ready;
    struct {  /* source */
      bool done;
    } source;
    struct {  /* recv1 */
      bool done;
      uint64_t recv1_vote;
    } recv1;
    struct {  /* recv2 */
      bool done;
      uint64_t recv2_vote;
    } recv2;
  } smp;
} state;



