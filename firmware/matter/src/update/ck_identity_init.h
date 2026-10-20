#ifndef CK_IDENTITY_INIT_H
#define CK_IDENTITY_INIT_H
/* Public installation intent, never a seed or credential. The second
 * snapshot slot carries this until the initial identity commit is verified. */
#define CK_INIT_MARKER "CKAUTOINIT-V1\r\n"
#define CK_INIT_MARKER_SIZE 15u
#define CK_ENTROPY_PENDING 75
#endif
