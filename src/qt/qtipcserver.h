#ifndef QTIPCSERVER_H
#define QTIPCSERVER_H

// Define nextgencoin-Qt message queue name
#define BITCOINURI_QUEUE_NAME "nextgencoinURI"

void ipcScanRelay(int argc, char *argv[]);
void ipcInit(int argc, char *argv[]);

#endif // QTIPCSERVER_H
