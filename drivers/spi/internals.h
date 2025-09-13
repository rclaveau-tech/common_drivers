static inline bool spi_xfer_is_dma_mapped(struct spi_controller *ctlr,
                                          struct spi_device *spi,
                                          struct spi_transfer *xfer)
{
    return ctlr->can_dma && ctlr->can_dma(ctlr, spi, xfer) &&
           (xfer->tx_sg_mapped || xfer->rx_sg_mapped);
}
