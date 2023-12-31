// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/bigquery/storage/v1/arrow.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto;
namespace google {
namespace cloud {
namespace bigquery {
namespace storage {
namespace v1 {
class ArrowRecordBatch;
class ArrowRecordBatchDefaultTypeInternal;
extern ArrowRecordBatchDefaultTypeInternal _ArrowRecordBatch_default_instance_;
class ArrowSchema;
class ArrowSchemaDefaultTypeInternal;
extern ArrowSchemaDefaultTypeInternal _ArrowSchema_default_instance_;
class ArrowSerializationOptions;
class ArrowSerializationOptionsDefaultTypeInternal;
extern ArrowSerializationOptionsDefaultTypeInternal _ArrowSerializationOptions_default_instance_;
}  // namespace v1
}  // namespace storage
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> ::google::cloud::bigquery::storage::v1::ArrowRecordBatch* Arena::CreateMaybeMessage<::google::cloud::bigquery::storage::v1::ArrowRecordBatch>(Arena*);
template<> ::google::cloud::bigquery::storage::v1::ArrowSchema* Arena::CreateMaybeMessage<::google::cloud::bigquery::storage::v1::ArrowSchema>(Arena*);
template<> ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions* Arena::CreateMaybeMessage<::google::cloud::bigquery::storage::v1::ArrowSerializationOptions>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace google {
namespace cloud {
namespace bigquery {
namespace storage {
namespace v1 {

enum ArrowSerializationOptions_CompressionCodec : int {
  ArrowSerializationOptions_CompressionCodec_COMPRESSION_UNSPECIFIED = 0,
  ArrowSerializationOptions_CompressionCodec_LZ4_FRAME = 1,
  ArrowSerializationOptions_CompressionCodec_ZSTD = 2,
  ArrowSerializationOptions_CompressionCodec_ArrowSerializationOptions_CompressionCodec_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ArrowSerializationOptions_CompressionCodec_ArrowSerializationOptions_CompressionCodec_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ArrowSerializationOptions_CompressionCodec_IsValid(int value);
constexpr ArrowSerializationOptions_CompressionCodec ArrowSerializationOptions_CompressionCodec_CompressionCodec_MIN = ArrowSerializationOptions_CompressionCodec_COMPRESSION_UNSPECIFIED;
constexpr ArrowSerializationOptions_CompressionCodec ArrowSerializationOptions_CompressionCodec_CompressionCodec_MAX = ArrowSerializationOptions_CompressionCodec_ZSTD;
constexpr int ArrowSerializationOptions_CompressionCodec_CompressionCodec_ARRAYSIZE = ArrowSerializationOptions_CompressionCodec_CompressionCodec_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ArrowSerializationOptions_CompressionCodec_descriptor();
template<typename T>
inline const std::string& ArrowSerializationOptions_CompressionCodec_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ArrowSerializationOptions_CompressionCodec>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ArrowSerializationOptions_CompressionCodec_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ArrowSerializationOptions_CompressionCodec_descriptor(), enum_t_value);
}
inline bool ArrowSerializationOptions_CompressionCodec_Parse(
    const std::string& name, ArrowSerializationOptions_CompressionCodec* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ArrowSerializationOptions_CompressionCodec>(
    ArrowSerializationOptions_CompressionCodec_descriptor(), name, value);
}
// ===================================================================

class ArrowSchema PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.bigquery.storage.v1.ArrowSchema) */ {
 public:
  inline ArrowSchema() : ArrowSchema(nullptr) {};
  virtual ~ArrowSchema();

  ArrowSchema(const ArrowSchema& from);
  ArrowSchema(ArrowSchema&& from) noexcept
    : ArrowSchema() {
    *this = ::std::move(from);
  }

  inline ArrowSchema& operator=(const ArrowSchema& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArrowSchema& operator=(ArrowSchema&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ArrowSchema& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ArrowSchema* internal_default_instance() {
    return reinterpret_cast<const ArrowSchema*>(
               &_ArrowSchema_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ArrowSchema& a, ArrowSchema& b) {
    a.Swap(&b);
  }
  inline void Swap(ArrowSchema* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ArrowSchema* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ArrowSchema* New() const final {
    return CreateMaybeMessage<ArrowSchema>(nullptr);
  }

  ArrowSchema* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ArrowSchema>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ArrowSchema& from);
  void MergeFrom(const ArrowSchema& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ArrowSchema* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.bigquery.storage.v1.ArrowSchema";
  }
  protected:
  explicit ArrowSchema(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto);
    return ::descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSerializedSchemaFieldNumber = 1,
  };
  // bytes serialized_schema = 1;
  void clear_serialized_schema();
  const std::string& serialized_schema() const;
  void set_serialized_schema(const std::string& value);
  void set_serialized_schema(std::string&& value);
  void set_serialized_schema(const char* value);
  void set_serialized_schema(const void* value, size_t size);
  std::string* mutable_serialized_schema();
  std::string* release_serialized_schema();
  void set_allocated_serialized_schema(std::string* serialized_schema);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_serialized_schema();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_serialized_schema(
      std::string* serialized_schema);
  private:
  const std::string& _internal_serialized_schema() const;
  void _internal_set_serialized_schema(const std::string& value);
  std::string* _internal_mutable_serialized_schema();
  public:

  // @@protoc_insertion_point(class_scope:google.cloud.bigquery.storage.v1.ArrowSchema)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serialized_schema_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto;
};
// -------------------------------------------------------------------

class ArrowRecordBatch PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.bigquery.storage.v1.ArrowRecordBatch) */ {
 public:
  inline ArrowRecordBatch() : ArrowRecordBatch(nullptr) {};
  virtual ~ArrowRecordBatch();

  ArrowRecordBatch(const ArrowRecordBatch& from);
  ArrowRecordBatch(ArrowRecordBatch&& from) noexcept
    : ArrowRecordBatch() {
    *this = ::std::move(from);
  }

  inline ArrowRecordBatch& operator=(const ArrowRecordBatch& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArrowRecordBatch& operator=(ArrowRecordBatch&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ArrowRecordBatch& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ArrowRecordBatch* internal_default_instance() {
    return reinterpret_cast<const ArrowRecordBatch*>(
               &_ArrowRecordBatch_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ArrowRecordBatch& a, ArrowRecordBatch& b) {
    a.Swap(&b);
  }
  inline void Swap(ArrowRecordBatch* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ArrowRecordBatch* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ArrowRecordBatch* New() const final {
    return CreateMaybeMessage<ArrowRecordBatch>(nullptr);
  }

  ArrowRecordBatch* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ArrowRecordBatch>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ArrowRecordBatch& from);
  void MergeFrom(const ArrowRecordBatch& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ArrowRecordBatch* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.bigquery.storage.v1.ArrowRecordBatch";
  }
  protected:
  explicit ArrowRecordBatch(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto);
    return ::descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSerializedRecordBatchFieldNumber = 1,
    kRowCountFieldNumber = 2,
  };
  // bytes serialized_record_batch = 1;
  void clear_serialized_record_batch();
  const std::string& serialized_record_batch() const;
  void set_serialized_record_batch(const std::string& value);
  void set_serialized_record_batch(std::string&& value);
  void set_serialized_record_batch(const char* value);
  void set_serialized_record_batch(const void* value, size_t size);
  std::string* mutable_serialized_record_batch();
  std::string* release_serialized_record_batch();
  void set_allocated_serialized_record_batch(std::string* serialized_record_batch);
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  std::string* unsafe_arena_release_serialized_record_batch();
  GOOGLE_PROTOBUF_RUNTIME_DEPRECATED("The unsafe_arena_ accessors for"
  "    string fields are deprecated and will be removed in a"
  "    future release.")
  void unsafe_arena_set_allocated_serialized_record_batch(
      std::string* serialized_record_batch);
  private:
  const std::string& _internal_serialized_record_batch() const;
  void _internal_set_serialized_record_batch(const std::string& value);
  std::string* _internal_mutable_serialized_record_batch();
  public:

  // int64 row_count = 2 [deprecated = true];
   void clear_row_count();
   ::PROTOBUF_NAMESPACE_ID::int64 row_count() const;
   void set_row_count(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_row_count() const;
  void _internal_set_row_count(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:google.cloud.bigquery.storage.v1.ArrowRecordBatch)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serialized_record_batch_;
  ::PROTOBUF_NAMESPACE_ID::int64 row_count_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto;
};
// -------------------------------------------------------------------

class ArrowSerializationOptions PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:google.cloud.bigquery.storage.v1.ArrowSerializationOptions) */ {
 public:
  inline ArrowSerializationOptions() : ArrowSerializationOptions(nullptr) {};
  virtual ~ArrowSerializationOptions();

  ArrowSerializationOptions(const ArrowSerializationOptions& from);
  ArrowSerializationOptions(ArrowSerializationOptions&& from) noexcept
    : ArrowSerializationOptions() {
    *this = ::std::move(from);
  }

  inline ArrowSerializationOptions& operator=(const ArrowSerializationOptions& from) {
    CopyFrom(from);
    return *this;
  }
  inline ArrowSerializationOptions& operator=(ArrowSerializationOptions&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ArrowSerializationOptions& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ArrowSerializationOptions* internal_default_instance() {
    return reinterpret_cast<const ArrowSerializationOptions*>(
               &_ArrowSerializationOptions_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ArrowSerializationOptions& a, ArrowSerializationOptions& b) {
    a.Swap(&b);
  }
  inline void Swap(ArrowSerializationOptions* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ArrowSerializationOptions* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ArrowSerializationOptions* New() const final {
    return CreateMaybeMessage<ArrowSerializationOptions>(nullptr);
  }

  ArrowSerializationOptions* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ArrowSerializationOptions>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ArrowSerializationOptions& from);
  void MergeFrom(const ArrowSerializationOptions& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ArrowSerializationOptions* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "google.cloud.bigquery.storage.v1.ArrowSerializationOptions";
  }
  protected:
  explicit ArrowSerializationOptions(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto);
    return ::descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef ArrowSerializationOptions_CompressionCodec CompressionCodec;
  static constexpr CompressionCodec COMPRESSION_UNSPECIFIED =
    ArrowSerializationOptions_CompressionCodec_COMPRESSION_UNSPECIFIED;
  static constexpr CompressionCodec LZ4_FRAME =
    ArrowSerializationOptions_CompressionCodec_LZ4_FRAME;
  static constexpr CompressionCodec ZSTD =
    ArrowSerializationOptions_CompressionCodec_ZSTD;
  static inline bool CompressionCodec_IsValid(int value) {
    return ArrowSerializationOptions_CompressionCodec_IsValid(value);
  }
  static constexpr CompressionCodec CompressionCodec_MIN =
    ArrowSerializationOptions_CompressionCodec_CompressionCodec_MIN;
  static constexpr CompressionCodec CompressionCodec_MAX =
    ArrowSerializationOptions_CompressionCodec_CompressionCodec_MAX;
  static constexpr int CompressionCodec_ARRAYSIZE =
    ArrowSerializationOptions_CompressionCodec_CompressionCodec_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CompressionCodec_descriptor() {
    return ArrowSerializationOptions_CompressionCodec_descriptor();
  }
  template<typename T>
  static inline const std::string& CompressionCodec_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CompressionCodec>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CompressionCodec_Name.");
    return ArrowSerializationOptions_CompressionCodec_Name(enum_t_value);
  }
  static inline bool CompressionCodec_Parse(const std::string& name,
      CompressionCodec* value) {
    return ArrowSerializationOptions_CompressionCodec_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kBufferCompressionFieldNumber = 2,
  };
  // .google.cloud.bigquery.storage.v1.ArrowSerializationOptions.CompressionCodec buffer_compression = 2;
  void clear_buffer_compression();
  ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec buffer_compression() const;
  void set_buffer_compression(::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec value);
  private:
  ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec _internal_buffer_compression() const;
  void _internal_set_buffer_compression(::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec value);
  public:

  // @@protoc_insertion_point(class_scope:google.cloud.bigquery.storage.v1.ArrowSerializationOptions)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int buffer_compression_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  # pragma GCC diagnostic push
  # pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ArrowSchema

// bytes serialized_schema = 1;
inline void ArrowSchema::clear_serialized_schema() {
  serialized_schema_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ArrowSchema::serialized_schema() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
  return _internal_serialized_schema();
}
inline void ArrowSchema::set_serialized_schema(const std::string& value) {
  _internal_set_serialized_schema(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
}
inline std::string* ArrowSchema::mutable_serialized_schema() {
  // @@protoc_insertion_point(field_mutable:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
  return _internal_mutable_serialized_schema();
}
inline const std::string& ArrowSchema::_internal_serialized_schema() const {
  return serialized_schema_.Get();
}
inline void ArrowSchema::_internal_set_serialized_schema(const std::string& value) {
  
  serialized_schema_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ArrowSchema::set_serialized_schema(std::string&& value) {
  
  serialized_schema_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
}
inline void ArrowSchema::set_serialized_schema(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  serialized_schema_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
}
inline void ArrowSchema::set_serialized_schema(const void* value,
    size_t size) {
  
  serialized_schema_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
}
inline std::string* ArrowSchema::_internal_mutable_serialized_schema() {
  
  return serialized_schema_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ArrowSchema::release_serialized_schema() {
  // @@protoc_insertion_point(field_release:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
  return serialized_schema_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ArrowSchema::set_allocated_serialized_schema(std::string* serialized_schema) {
  if (serialized_schema != nullptr) {
    
  } else {
    
  }
  serialized_schema_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), serialized_schema,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
}
inline std::string* ArrowSchema::unsafe_arena_release_serialized_schema() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return serialized_schema_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void ArrowSchema::unsafe_arena_set_allocated_serialized_schema(
    std::string* serialized_schema) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (serialized_schema != nullptr) {
    
  } else {
    
  }
  serialized_schema_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      serialized_schema, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.cloud.bigquery.storage.v1.ArrowSchema.serialized_schema)
}

// -------------------------------------------------------------------

// ArrowRecordBatch

// bytes serialized_record_batch = 1;
inline void ArrowRecordBatch::clear_serialized_record_batch() {
  serialized_record_batch_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ArrowRecordBatch::serialized_record_batch() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
  return _internal_serialized_record_batch();
}
inline void ArrowRecordBatch::set_serialized_record_batch(const std::string& value) {
  _internal_set_serialized_record_batch(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
}
inline std::string* ArrowRecordBatch::mutable_serialized_record_batch() {
  // @@protoc_insertion_point(field_mutable:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
  return _internal_mutable_serialized_record_batch();
}
inline const std::string& ArrowRecordBatch::_internal_serialized_record_batch() const {
  return serialized_record_batch_.Get();
}
inline void ArrowRecordBatch::_internal_set_serialized_record_batch(const std::string& value) {
  
  serialized_record_batch_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ArrowRecordBatch::set_serialized_record_batch(std::string&& value) {
  
  serialized_record_batch_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
}
inline void ArrowRecordBatch::set_serialized_record_batch(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  serialized_record_batch_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
}
inline void ArrowRecordBatch::set_serialized_record_batch(const void* value,
    size_t size) {
  
  serialized_record_batch_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
}
inline std::string* ArrowRecordBatch::_internal_mutable_serialized_record_batch() {
  
  return serialized_record_batch_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ArrowRecordBatch::release_serialized_record_batch() {
  // @@protoc_insertion_point(field_release:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
  return serialized_record_batch_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ArrowRecordBatch::set_allocated_serialized_record_batch(std::string* serialized_record_batch) {
  if (serialized_record_batch != nullptr) {
    
  } else {
    
  }
  serialized_record_batch_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), serialized_record_batch,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
}
inline std::string* ArrowRecordBatch::unsafe_arena_release_serialized_record_batch() {
  // @@protoc_insertion_point(field_unsafe_arena_release:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
  GOOGLE_DCHECK(GetArena() != nullptr);
  
  return serialized_record_batch_.UnsafeArenaRelease(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      GetArena());
}
inline void ArrowRecordBatch::unsafe_arena_set_allocated_serialized_record_batch(
    std::string* serialized_record_batch) {
  GOOGLE_DCHECK(GetArena() != nullptr);
  if (serialized_record_batch != nullptr) {
    
  } else {
    
  }
  serialized_record_batch_.UnsafeArenaSetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      serialized_record_batch, GetArena());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:google.cloud.bigquery.storage.v1.ArrowRecordBatch.serialized_record_batch)
}

// int64 row_count = 2 [deprecated = true];
inline void ArrowRecordBatch::clear_row_count() {
  row_count_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ArrowRecordBatch::_internal_row_count() const {
  return row_count_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ArrowRecordBatch::row_count() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.ArrowRecordBatch.row_count)
  return _internal_row_count();
}
inline void ArrowRecordBatch::_internal_set_row_count(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  row_count_ = value;
}
inline void ArrowRecordBatch::set_row_count(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_row_count(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.ArrowRecordBatch.row_count)
}

// -------------------------------------------------------------------

// ArrowSerializationOptions

// .google.cloud.bigquery.storage.v1.ArrowSerializationOptions.CompressionCodec buffer_compression = 2;
inline void ArrowSerializationOptions::clear_buffer_compression() {
  buffer_compression_ = 0;
}
inline ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec ArrowSerializationOptions::_internal_buffer_compression() const {
  return static_cast< ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec >(buffer_compression_);
}
inline ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec ArrowSerializationOptions::buffer_compression() const {
  // @@protoc_insertion_point(field_get:google.cloud.bigquery.storage.v1.ArrowSerializationOptions.buffer_compression)
  return _internal_buffer_compression();
}
inline void ArrowSerializationOptions::_internal_set_buffer_compression(::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec value) {
  
  buffer_compression_ = value;
}
inline void ArrowSerializationOptions::set_buffer_compression(::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec value) {
  _internal_set_buffer_compression(value);
  // @@protoc_insertion_point(field_set:google.cloud.bigquery.storage.v1.ArrowSerializationOptions.buffer_compression)
}

#ifdef __GNUC__
  # pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace v1
}  // namespace storage
}  // namespace bigquery
}  // namespace cloud
}  // namespace google

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec>() {
  return ::google::cloud::bigquery::storage::v1::ArrowSerializationOptions_CompressionCodec_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fcloud_2fbigquery_2fstorage_2fv1_2farrow_2eproto
