#ifndef __EVERDRIVE_H
#define __EVERDRIVE_H

#define ROM_LEN  0x4000000 // 64 meg

#define DMA_BUFF_ADDR (ROM_LEN - 0x100000)

#define EVERDRIVE_TO_CART 3
#define EVERDRIVE_FROM_CART 4

void everdrive_init();
unsigned char everdrive_dma_busy();
void everdrive_fifo_read_buffer(void *buff, unsigned short blocks);
void everdrive_fifo_write_buffer(void *buff, unsigned short blocks);

void handle_usb();

typedef struct ED_regs_s {
    uint32_t configuration;
    uint32_t status;
    uint32_t length;
    uint32_t ram_address;
    uint32_t message;
    uint32_t direction;
    uint32_t unused1;
    uint32_t unused2;
    uint32_t key;
} ED_regs_t;

#endif
