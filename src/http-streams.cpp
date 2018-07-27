#include "downloader.hpp"
#include <curl/curl.h>
#include <streams++/http-streams.hpp>

namespace streams {

HttpReadableStream::HttpReadableStream()
    : m_worker(new internal::Downloader()) {}

HttpReadableStream::~HttpReadableStream() {}
int HttpReadableStream::read(unsigned char *buffer, int max_len) const {
  return m_worker->read(buffer, max_len);
}

} // namespace streams