#include "env_xnvme.h"

XnvmeEnv::XnvmeEnv()
{
    // xNVMe initialize
}

XnvmeEnv::~XnvmeEnv() 
{
    // xNVMe despose
}

rocksdb::Status XnvmeEnv::NewSequentialFile(const std::string& f, rocksdb::SequentialFile** r, const rocksdb::EnvOptions& options) 
{
    // xNVMe Sequential File open
    return rocksdb::Status::OK();
}

rocksdb::Status XnvmeEnv::NewRandomAccessFile(const std::string& f, rocksdb::RandomAccessFile** r, const rocksdb::EnvOptions& options) 
{
    // xNVMe Random Access File open
    return rocksdb::Status::OK();
}

rocksdb::Status XnvmeEnv::NewWritableFile(const std::string& f, rocksdb::WritableFile** r, const rocksdb::EnvOptions& options) 
{
    // xNVMe Writable File open
    return rocksdb::Status::OK();
}
