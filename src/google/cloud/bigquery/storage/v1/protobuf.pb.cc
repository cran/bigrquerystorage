// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/cloud/bigquery/storage/v1/protobuf.proto

#include "google/cloud/bigquery/storage/v1/protobuf.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fdescriptor_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<6> scc_info_DescriptorProto_google_2fprotobuf_2fdescriptor_2eproto;
namespace google {
namespace cloud {
namespace bigquery {
namespace storage {
namespace v1 {
class ProtoSchemaDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ProtoSchema> _instance;
} _ProtoSchema_default_instance_;
class ProtoRowsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ProtoRows> _instance;
} _ProtoRows_default_instance_;
}  // namespace v1
}  // namespace storage
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
static void InitDefaultsscc_info_ProtoRows_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::cloud::bigquery::storage::v1::_ProtoRows_default_instance_;
    new (ptr) ::google::cloud::bigquery::storage::v1::ProtoRows();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::cloud::bigquery::storage::v1::ProtoRows::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ProtoRows_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ProtoRows_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto}, {}};

static void InitDefaultsscc_info_ProtoSchema_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::google::cloud::bigquery::storage::v1::_ProtoSchema_default_instance_;
    new (ptr) ::google::cloud::bigquery::storage::v1::ProtoSchema();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::google::cloud::bigquery::storage::v1::ProtoSchema::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ProtoSchema_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ProtoSchema_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto}, {
      &scc_info_DescriptorProto_google_2fprotobuf_2fdescriptor_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::cloud::bigquery::storage::v1::ProtoSchema, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::cloud::bigquery::storage::v1::ProtoSchema, proto_descriptor_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::cloud::bigquery::storage::v1::ProtoRows, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::google::cloud::bigquery::storage::v1::ProtoRows, serialized_rows_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::google::cloud::bigquery::storage::v1::ProtoSchema)},
  { 6, -1, sizeof(::google::cloud::bigquery::storage::v1::ProtoRows)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::cloud::bigquery::storage::v1::_ProtoSchema_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::google::cloud::bigquery::storage::v1::_ProtoRows_default_instance_),
};

const char descriptor_table_protodef_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n/google/cloud/bigquery/storage/v1/proto"
  "buf.proto\022 google.cloud.bigquery.storage"
  ".v1\032 google/protobuf/descriptor.proto\"I\n"
  "\013ProtoSchema\022:\n\020proto_descriptor\030\001 \001(\0132 "
  ".google.protobuf.DescriptorProto\"$\n\tProt"
  "oRows\022\027\n\017serialized_rows\030\001 \003(\014B\275\001\n$com.g"
  "oogle.cloud.bigquery.storage.v1B\rProtoBu"
  "fProtoP\001Z>cloud.google.com/go/bigquery/s"
  "torage/apiv1/storagepb;storagepb\252\002 Googl"
  "e.Cloud.BigQuery.Storage.V1\312\002 Google\\Clo"
  "ud\\BigQuery\\Storage\\V1b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto_sccs[2] = {
  &scc_info_ProtoRows_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto.base,
  &scc_info_ProtoSchema_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto = {
  false, false, descriptor_table_protodef_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto, "google/cloud/bigquery/storage/v1/protobuf.proto", 430,
  &descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto_once, descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto_sccs, descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto_deps, 2, 1,
  schemas, file_default_instances, TableStruct_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto::offsets,
  file_level_metadata_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto, 2, file_level_enum_descriptors_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto, file_level_service_descriptors_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto)), true);
namespace google {
namespace cloud {
namespace bigquery {
namespace storage {
namespace v1 {

// ===================================================================

void ProtoSchema::InitAsDefaultInstance() {
  ::google::cloud::bigquery::storage::v1::_ProtoSchema_default_instance_._instance.get_mutable()->proto_descriptor_ = const_cast< PROTOBUF_NAMESPACE_ID::DescriptorProto*>(
      PROTOBUF_NAMESPACE_ID::DescriptorProto::internal_default_instance());
}
class ProtoSchema::_Internal {
 public:
  static const PROTOBUF_NAMESPACE_ID::DescriptorProto& proto_descriptor(const ProtoSchema* msg);
};

const PROTOBUF_NAMESPACE_ID::DescriptorProto&
ProtoSchema::_Internal::proto_descriptor(const ProtoSchema* msg) {
  return *msg->proto_descriptor_;
}
void ProtoSchema::clear_proto_descriptor() {
  if (GetArena() == nullptr && proto_descriptor_ != nullptr) {
    delete proto_descriptor_;
  }
  proto_descriptor_ = nullptr;
}
ProtoSchema::ProtoSchema(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.cloud.bigquery.storage.v1.ProtoSchema)
}
ProtoSchema::ProtoSchema(const ProtoSchema& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_proto_descriptor()) {
    proto_descriptor_ = new PROTOBUF_NAMESPACE_ID::DescriptorProto(*from.proto_descriptor_);
  } else {
    proto_descriptor_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:google.cloud.bigquery.storage.v1.ProtoSchema)
}

void ProtoSchema::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ProtoSchema_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto.base);
  proto_descriptor_ = nullptr;
}

ProtoSchema::~ProtoSchema() {
  // @@protoc_insertion_point(destructor:google.cloud.bigquery.storage.v1.ProtoSchema)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ProtoSchema::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete proto_descriptor_;
}

void ProtoSchema::ArenaDtor(void* object) {
  ProtoSchema* _this = reinterpret_cast< ProtoSchema* >(object);
  (void)_this;
}
void ProtoSchema::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ProtoSchema::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ProtoSchema& ProtoSchema::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ProtoSchema_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto.base);
  return *internal_default_instance();
}


void ProtoSchema::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.bigquery.storage.v1.ProtoSchema)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && proto_descriptor_ != nullptr) {
    delete proto_descriptor_;
  }
  proto_descriptor_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProtoSchema::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .google.protobuf.DescriptorProto proto_descriptor = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_proto_descriptor(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ProtoSchema::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.bigquery.storage.v1.ProtoSchema)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.DescriptorProto proto_descriptor = 1;
  if (this->has_proto_descriptor()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::proto_descriptor(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.bigquery.storage.v1.ProtoSchema)
  return target;
}

size_t ProtoSchema::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.bigquery.storage.v1.ProtoSchema)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .google.protobuf.DescriptorProto proto_descriptor = 1;
  if (this->has_proto_descriptor()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *proto_descriptor_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoSchema::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.bigquery.storage.v1.ProtoSchema)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoSchema* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ProtoSchema>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.bigquery.storage.v1.ProtoSchema)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.bigquery.storage.v1.ProtoSchema)
    MergeFrom(*source);
  }
}

void ProtoSchema::MergeFrom(const ProtoSchema& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.bigquery.storage.v1.ProtoSchema)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_proto_descriptor()) {
    _internal_mutable_proto_descriptor()->PROTOBUF_NAMESPACE_ID::DescriptorProto::MergeFrom(from._internal_proto_descriptor());
  }
}

void ProtoSchema::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.bigquery.storage.v1.ProtoSchema)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoSchema::CopyFrom(const ProtoSchema& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.bigquery.storage.v1.ProtoSchema)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoSchema::IsInitialized() const {
  if (_internal_has_proto_descriptor()) {
    if (!proto_descriptor_->IsInitialized()) return false;
  }
  return true;
}

void ProtoSchema::InternalSwap(ProtoSchema* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(proto_descriptor_, other->proto_descriptor_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProtoSchema::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void ProtoRows::InitAsDefaultInstance() {
}
class ProtoRows::_Internal {
 public:
};

ProtoRows::ProtoRows(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  serialized_rows_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:google.cloud.bigquery.storage.v1.ProtoRows)
}
ProtoRows::ProtoRows(const ProtoRows& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      serialized_rows_(from.serialized_rows_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:google.cloud.bigquery.storage.v1.ProtoRows)
}

void ProtoRows::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ProtoRows_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto.base);
}

ProtoRows::~ProtoRows() {
  // @@protoc_insertion_point(destructor:google.cloud.bigquery.storage.v1.ProtoRows)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ProtoRows::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void ProtoRows::ArenaDtor(void* object) {
  ProtoRows* _this = reinterpret_cast< ProtoRows* >(object);
  (void)_this;
}
void ProtoRows::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ProtoRows::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ProtoRows& ProtoRows::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ProtoRows_google_2fcloud_2fbigquery_2fstorage_2fv1_2fprotobuf_2eproto.base);
  return *internal_default_instance();
}


void ProtoRows::Clear() {
// @@protoc_insertion_point(message_clear_start:google.cloud.bigquery.storage.v1.ProtoRows)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  serialized_rows_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ProtoRows::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated bytes serialized_rows = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_serialized_rows();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ProtoRows::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.cloud.bigquery.storage.v1.ProtoRows)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated bytes serialized_rows = 1;
  for (int i = 0, n = this->_internal_serialized_rows_size(); i < n; i++) {
    const auto& s = this->_internal_serialized_rows(i);
    target = stream->WriteBytes(1, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.cloud.bigquery.storage.v1.ProtoRows)
  return target;
}

size_t ProtoRows::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.cloud.bigquery.storage.v1.ProtoRows)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes serialized_rows = 1;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(serialized_rows_.size());
  for (int i = 0, n = serialized_rows_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      serialized_rows_.Get(i));
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ProtoRows::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:google.cloud.bigquery.storage.v1.ProtoRows)
  GOOGLE_DCHECK_NE(&from, this);
  const ProtoRows* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ProtoRows>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:google.cloud.bigquery.storage.v1.ProtoRows)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:google.cloud.bigquery.storage.v1.ProtoRows)
    MergeFrom(*source);
  }
}

void ProtoRows::MergeFrom(const ProtoRows& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.cloud.bigquery.storage.v1.ProtoRows)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  serialized_rows_.MergeFrom(from.serialized_rows_);
}

void ProtoRows::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:google.cloud.bigquery.storage.v1.ProtoRows)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProtoRows::CopyFrom(const ProtoRows& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.cloud.bigquery.storage.v1.ProtoRows)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProtoRows::IsInitialized() const {
  return true;
}

void ProtoRows::InternalSwap(ProtoRows* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  serialized_rows_.InternalSwap(&other->serialized_rows_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ProtoRows::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace v1
}  // namespace storage
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::cloud::bigquery::storage::v1::ProtoSchema* Arena::CreateMaybeMessage< ::google::cloud::bigquery::storage::v1::ProtoSchema >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::cloud::bigquery::storage::v1::ProtoSchema >(arena);
}
template<> PROTOBUF_NOINLINE ::google::cloud::bigquery::storage::v1::ProtoRows* Arena::CreateMaybeMessage< ::google::cloud::bigquery::storage::v1::ProtoRows >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::cloud::bigquery::storage::v1::ProtoRows >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
