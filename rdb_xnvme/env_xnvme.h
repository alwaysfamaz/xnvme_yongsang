#ifndef ENV_XNVME_H
#define ENV_XNVME_H

#include <rocksdb/env.h>
#include <xnvme.h>
#include <xnvme_be.h>
#include <xnvme_dev.h>

class XnvmeEnv : public rocksdb::Env 
{
public:
    XnvmeEnv();
    virtual ~XnvmeEnv();

    rocksdb::Status NewSequentialFile(const std::string& f, rocksdb::SequentialFile** r, const rocksdb::EnvOptions& options) override;
    rocksdb::Status NewRandomAccessFile(const std::string& f, rocksdb::RandomAccessFile** r, const rocksdb::EnvOptions& options) override;
    rocksdb::Status NewWritableFile(const std::string& f, rocksdb::WritableFile** r, const rocksdb::EnvOptions& options) override;
};

#endif // ENV_XNVME_H
