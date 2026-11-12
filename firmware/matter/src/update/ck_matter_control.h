#ifndef CK_MATTER_CONTROL_H
#define CK_MATTER_CONTROL_H
/* Fixed RAM mailbox. Only the authenticated setup service may enqueue LAN
 * requests; the Matter event loop owns all SDK operations and Flash writes. */
#define CK_MATTER_REQUEST "/var/run/ck-matter-request"
#define CK_MATTER_LOCK "/var/run/ck-matter-request.lock"
#define CK_MATTER_STATE "/var/run/ck-matter-state.json"
#define CK_MATTER_RESET_KEY "control/matter-reset"
#define CK_MATTER_WINDOW_SECONDS 900
#define CK_PROTOCOL_PENDING "/var/run/ck-protocol-pending"
#endif
