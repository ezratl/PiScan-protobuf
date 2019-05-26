// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: context.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_context_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_context_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_context_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_context_2eproto {
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
void AddDescriptors_context_2eproto();
class DemodContext;
class DemodContextDefaultTypeInternal;
extern DemodContextDefaultTypeInternal _DemodContext_default_instance_;
class GeneralMessage;
class GeneralMessageDefaultTypeInternal;
extern GeneralMessageDefaultTypeInternal _GeneralMessage_default_instance_;
class ScannerContext;
class ScannerContextDefaultTypeInternal;
extern ScannerContextDefaultTypeInternal _ScannerContext_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::DemodContext* Arena::CreateMaybeMessage<::DemodContext>(Arena*);
template<> ::GeneralMessage* Arena::CreateMaybeMessage<::GeneralMessage>(Arena*);
template<> ::ScannerContext* Arena::CreateMaybeMessage<::ScannerContext>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum ScannerContext_State {
  ScannerContext_State_INVAL = 0,
  ScannerContext_State_SCAN = 1,
  ScannerContext_State_HOLD = 2,
  ScannerContext_State_RECEIVE = 3,
  ScannerContext_State_ScannerContext_State_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ScannerContext_State_ScannerContext_State_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ScannerContext_State_IsValid(int value);
constexpr ScannerContext_State ScannerContext_State_State_MIN = ScannerContext_State_INVAL;
constexpr ScannerContext_State ScannerContext_State_State_MAX = ScannerContext_State_RECEIVE;
constexpr int ScannerContext_State_State_ARRAYSIZE = ScannerContext_State_State_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ScannerContext_State_descriptor();
inline const std::string& ScannerContext_State_Name(ScannerContext_State value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ScannerContext_State_descriptor(), value);
}
inline bool ScannerContext_State_Parse(
    const std::string& name, ScannerContext_State* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ScannerContext_State>(
    ScannerContext_State_descriptor(), name, value);
}
enum GeneralMessage_Type {
  GeneralMessage_Type_INFO = 0,
  GeneralMessage_Type_WARNING = 1,
  GeneralMessage_Type_ERROR = 2,
  GeneralMessage_Type_GeneralMessage_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  GeneralMessage_Type_GeneralMessage_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool GeneralMessage_Type_IsValid(int value);
constexpr GeneralMessage_Type GeneralMessage_Type_Type_MIN = GeneralMessage_Type_INFO;
constexpr GeneralMessage_Type GeneralMessage_Type_Type_MAX = GeneralMessage_Type_ERROR;
constexpr int GeneralMessage_Type_Type_ARRAYSIZE = GeneralMessage_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GeneralMessage_Type_descriptor();
inline const std::string& GeneralMessage_Type_Name(GeneralMessage_Type value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    GeneralMessage_Type_descriptor(), value);
}
inline bool GeneralMessage_Type_Parse(
    const std::string& name, GeneralMessage_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<GeneralMessage_Type>(
    GeneralMessage_Type_descriptor(), name, value);
}
// ===================================================================

class ScannerContext final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ScannerContext) */ {
 public:
  ScannerContext();
  virtual ~ScannerContext();

  ScannerContext(const ScannerContext& from);
  ScannerContext(ScannerContext&& from) noexcept
    : ScannerContext() {
    *this = ::std::move(from);
  }

  inline ScannerContext& operator=(const ScannerContext& from) {
    CopyFrom(from);
    return *this;
  }
  inline ScannerContext& operator=(ScannerContext&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const ScannerContext& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ScannerContext* internal_default_instance() {
    return reinterpret_cast<const ScannerContext*>(
               &_ScannerContext_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ScannerContext* other);
  friend void swap(ScannerContext& a, ScannerContext& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ScannerContext* New() const final {
    return CreateMaybeMessage<ScannerContext>(nullptr);
  }

  ScannerContext* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ScannerContext>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ScannerContext& from);
  void MergeFrom(const ScannerContext& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ScannerContext* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ScannerContext";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ScannerContext_State State;
  static constexpr State INVAL =
    ScannerContext_State_INVAL;
  static constexpr State SCAN =
    ScannerContext_State_SCAN;
  static constexpr State HOLD =
    ScannerContext_State_HOLD;
  static constexpr State RECEIVE =
    ScannerContext_State_RECEIVE;
  static inline bool State_IsValid(int value) {
    return ScannerContext_State_IsValid(value);
  }
  static constexpr State State_MIN =
    ScannerContext_State_State_MIN;
  static constexpr State State_MAX =
    ScannerContext_State_State_MAX;
  static constexpr int State_ARRAYSIZE =
    ScannerContext_State_State_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  State_descriptor() {
    return ScannerContext_State_descriptor();
  }
  static inline const std::string& State_Name(State value) {
    return ScannerContext_State_Name(value);
  }
  static inline bool State_Parse(const std::string& name,
      State* value) {
    return ScannerContext_State_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string systemTag = 3;
  void clear_systemtag();
  static const int kSystemTagFieldNumber = 3;
  const std::string& systemtag() const;
  void set_systemtag(const std::string& value);
  void set_systemtag(std::string&& value);
  void set_systemtag(const char* value);
  void set_systemtag(const char* value, size_t size);
  std::string* mutable_systemtag();
  std::string* release_systemtag();
  void set_allocated_systemtag(std::string* systemtag);

  // string entryTag = 4;
  void clear_entrytag();
  static const int kEntryTagFieldNumber = 4;
  const std::string& entrytag() const;
  void set_entrytag(const std::string& value);
  void set_entrytag(std::string&& value);
  void set_entrytag(const char* value);
  void set_entrytag(const char* value, size_t size);
  std::string* mutable_entrytag();
  std::string* release_entrytag();
  void set_allocated_entrytag(std::string* entrytag);

  // string modulation = 5;
  void clear_modulation();
  static const int kModulationFieldNumber = 5;
  const std::string& modulation() const;
  void set_modulation(const std::string& value);
  void set_modulation(std::string&& value);
  void set_modulation(const char* value);
  void set_modulation(const char* value, size_t size);
  std::string* mutable_modulation();
  std::string* release_modulation();
  void set_allocated_modulation(std::string* modulation);

  // string entryIndex = 6;
  void clear_entryindex();
  static const int kEntryIndexFieldNumber = 6;
  const std::string& entryindex() const;
  void set_entryindex(const std::string& value);
  void set_entryindex(std::string&& value);
  void set_entryindex(const char* value);
  void set_entryindex(const char* value, size_t size);
  std::string* mutable_entryindex();
  std::string* release_entryindex();
  void set_allocated_entryindex(std::string* entryindex);

  // uint64 freq = 2;
  void clear_freq();
  static const int kFreqFieldNumber = 2;
  ::PROTOBUF_NAMESPACE_ID::uint64 freq() const;
  void set_freq(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // .ScannerContext.State state = 1;
  void clear_state();
  static const int kStateFieldNumber = 1;
  ::ScannerContext_State state() const;
  void set_state(::ScannerContext_State value);

  // @@protoc_insertion_point(class_scope:ScannerContext)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr systemtag_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr entrytag_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr modulation_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr entryindex_;
  ::PROTOBUF_NAMESPACE_ID::uint64 freq_;
  int state_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_context_2eproto;
};
// -------------------------------------------------------------------

class DemodContext final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:DemodContext) */ {
 public:
  DemodContext();
  virtual ~DemodContext();

  DemodContext(const DemodContext& from);
  DemodContext(DemodContext&& from) noexcept
    : DemodContext() {
    *this = ::std::move(from);
  }

  inline DemodContext& operator=(const DemodContext& from) {
    CopyFrom(from);
    return *this;
  }
  inline DemodContext& operator=(DemodContext&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const DemodContext& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DemodContext* internal_default_instance() {
    return reinterpret_cast<const DemodContext*>(
               &_DemodContext_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(DemodContext* other);
  friend void swap(DemodContext& a, DemodContext& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DemodContext* New() const final {
    return CreateMaybeMessage<DemodContext>(nullptr);
  }

  DemodContext* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DemodContext>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DemodContext& from);
  void MergeFrom(const DemodContext& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DemodContext* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "DemodContext";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 squelch = 1;
  void clear_squelch();
  static const int kSquelchFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int32 squelch() const;
  void set_squelch(::PROTOBUF_NAMESPACE_ID::int32 value);

  // float gain = 2;
  void clear_gain();
  static const int kGainFieldNumber = 2;
  float gain() const;
  void set_gain(float value);

  // @@protoc_insertion_point(class_scope:DemodContext)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 squelch_;
  float gain_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_context_2eproto;
};
// -------------------------------------------------------------------

class GeneralMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:GeneralMessage) */ {
 public:
  GeneralMessage();
  virtual ~GeneralMessage();

  GeneralMessage(const GeneralMessage& from);
  GeneralMessage(GeneralMessage&& from) noexcept
    : GeneralMessage() {
    *this = ::std::move(from);
  }

  inline GeneralMessage& operator=(const GeneralMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline GeneralMessage& operator=(GeneralMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const GeneralMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GeneralMessage* internal_default_instance() {
    return reinterpret_cast<const GeneralMessage*>(
               &_GeneralMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(GeneralMessage* other);
  friend void swap(GeneralMessage& a, GeneralMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GeneralMessage* New() const final {
    return CreateMaybeMessage<GeneralMessage>(nullptr);
  }

  GeneralMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GeneralMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GeneralMessage& from);
  void MergeFrom(const GeneralMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GeneralMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "GeneralMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef GeneralMessage_Type Type;
  static constexpr Type INFO =
    GeneralMessage_Type_INFO;
  static constexpr Type WARNING =
    GeneralMessage_Type_WARNING;
  static constexpr Type ERROR =
    GeneralMessage_Type_ERROR;
  static inline bool Type_IsValid(int value) {
    return GeneralMessage_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    GeneralMessage_Type_Type_MIN;
  static constexpr Type Type_MAX =
    GeneralMessage_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    GeneralMessage_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return GeneralMessage_Type_descriptor();
  }
  static inline const std::string& Type_Name(Type value) {
    return GeneralMessage_Type_Name(value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return GeneralMessage_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string content = 2;
  void clear_content();
  static const int kContentFieldNumber = 2;
  const std::string& content() const;
  void set_content(const std::string& value);
  void set_content(std::string&& value);
  void set_content(const char* value);
  void set_content(const char* value, size_t size);
  std::string* mutable_content();
  std::string* release_content();
  void set_allocated_content(std::string* content);

  // .GeneralMessage.Type type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::GeneralMessage_Type type() const;
  void set_type(::GeneralMessage_Type value);

  // @@protoc_insertion_point(class_scope:GeneralMessage)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
  int type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_context_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ScannerContext

// .ScannerContext.State state = 1;
inline void ScannerContext::clear_state() {
  state_ = 0;
}
inline ::ScannerContext_State ScannerContext::state() const {
  // @@protoc_insertion_point(field_get:ScannerContext.state)
  return static_cast< ::ScannerContext_State >(state_);
}
inline void ScannerContext::set_state(::ScannerContext_State value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:ScannerContext.state)
}

// uint64 freq = 2;
inline void ScannerContext::clear_freq() {
  freq_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ScannerContext::freq() const {
  // @@protoc_insertion_point(field_get:ScannerContext.freq)
  return freq_;
}
inline void ScannerContext::set_freq(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  freq_ = value;
  // @@protoc_insertion_point(field_set:ScannerContext.freq)
}

// string systemTag = 3;
inline void ScannerContext::clear_systemtag() {
  systemtag_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ScannerContext::systemtag() const {
  // @@protoc_insertion_point(field_get:ScannerContext.systemTag)
  return systemtag_.GetNoArena();
}
inline void ScannerContext::set_systemtag(const std::string& value) {
  
  systemtag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ScannerContext.systemTag)
}
inline void ScannerContext::set_systemtag(std::string&& value) {
  
  systemtag_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ScannerContext.systemTag)
}
inline void ScannerContext::set_systemtag(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  systemtag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ScannerContext.systemTag)
}
inline void ScannerContext::set_systemtag(const char* value, size_t size) {
  
  systemtag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ScannerContext.systemTag)
}
inline std::string* ScannerContext::mutable_systemtag() {
  
  // @@protoc_insertion_point(field_mutable:ScannerContext.systemTag)
  return systemtag_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ScannerContext::release_systemtag() {
  // @@protoc_insertion_point(field_release:ScannerContext.systemTag)
  
  return systemtag_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ScannerContext::set_allocated_systemtag(std::string* systemtag) {
  if (systemtag != nullptr) {
    
  } else {
    
  }
  systemtag_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), systemtag);
  // @@protoc_insertion_point(field_set_allocated:ScannerContext.systemTag)
}

// string entryTag = 4;
inline void ScannerContext::clear_entrytag() {
  entrytag_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ScannerContext::entrytag() const {
  // @@protoc_insertion_point(field_get:ScannerContext.entryTag)
  return entrytag_.GetNoArena();
}
inline void ScannerContext::set_entrytag(const std::string& value) {
  
  entrytag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ScannerContext.entryTag)
}
inline void ScannerContext::set_entrytag(std::string&& value) {
  
  entrytag_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ScannerContext.entryTag)
}
inline void ScannerContext::set_entrytag(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  entrytag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ScannerContext.entryTag)
}
inline void ScannerContext::set_entrytag(const char* value, size_t size) {
  
  entrytag_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ScannerContext.entryTag)
}
inline std::string* ScannerContext::mutable_entrytag() {
  
  // @@protoc_insertion_point(field_mutable:ScannerContext.entryTag)
  return entrytag_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ScannerContext::release_entrytag() {
  // @@protoc_insertion_point(field_release:ScannerContext.entryTag)
  
  return entrytag_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ScannerContext::set_allocated_entrytag(std::string* entrytag) {
  if (entrytag != nullptr) {
    
  } else {
    
  }
  entrytag_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), entrytag);
  // @@protoc_insertion_point(field_set_allocated:ScannerContext.entryTag)
}

// string modulation = 5;
inline void ScannerContext::clear_modulation() {
  modulation_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ScannerContext::modulation() const {
  // @@protoc_insertion_point(field_get:ScannerContext.modulation)
  return modulation_.GetNoArena();
}
inline void ScannerContext::set_modulation(const std::string& value) {
  
  modulation_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ScannerContext.modulation)
}
inline void ScannerContext::set_modulation(std::string&& value) {
  
  modulation_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ScannerContext.modulation)
}
inline void ScannerContext::set_modulation(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  modulation_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ScannerContext.modulation)
}
inline void ScannerContext::set_modulation(const char* value, size_t size) {
  
  modulation_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ScannerContext.modulation)
}
inline std::string* ScannerContext::mutable_modulation() {
  
  // @@protoc_insertion_point(field_mutable:ScannerContext.modulation)
  return modulation_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ScannerContext::release_modulation() {
  // @@protoc_insertion_point(field_release:ScannerContext.modulation)
  
  return modulation_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ScannerContext::set_allocated_modulation(std::string* modulation) {
  if (modulation != nullptr) {
    
  } else {
    
  }
  modulation_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), modulation);
  // @@protoc_insertion_point(field_set_allocated:ScannerContext.modulation)
}

// string entryIndex = 6;
inline void ScannerContext::clear_entryindex() {
  entryindex_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ScannerContext::entryindex() const {
  // @@protoc_insertion_point(field_get:ScannerContext.entryIndex)
  return entryindex_.GetNoArena();
}
inline void ScannerContext::set_entryindex(const std::string& value) {
  
  entryindex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ScannerContext.entryIndex)
}
inline void ScannerContext::set_entryindex(std::string&& value) {
  
  entryindex_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ScannerContext.entryIndex)
}
inline void ScannerContext::set_entryindex(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  entryindex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ScannerContext.entryIndex)
}
inline void ScannerContext::set_entryindex(const char* value, size_t size) {
  
  entryindex_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ScannerContext.entryIndex)
}
inline std::string* ScannerContext::mutable_entryindex() {
  
  // @@protoc_insertion_point(field_mutable:ScannerContext.entryIndex)
  return entryindex_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ScannerContext::release_entryindex() {
  // @@protoc_insertion_point(field_release:ScannerContext.entryIndex)
  
  return entryindex_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ScannerContext::set_allocated_entryindex(std::string* entryindex) {
  if (entryindex != nullptr) {
    
  } else {
    
  }
  entryindex_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), entryindex);
  // @@protoc_insertion_point(field_set_allocated:ScannerContext.entryIndex)
}

// -------------------------------------------------------------------

// DemodContext

// int32 squelch = 1;
inline void DemodContext::clear_squelch() {
  squelch_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DemodContext::squelch() const {
  // @@protoc_insertion_point(field_get:DemodContext.squelch)
  return squelch_;
}
inline void DemodContext::set_squelch(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  squelch_ = value;
  // @@protoc_insertion_point(field_set:DemodContext.squelch)
}

// float gain = 2;
inline void DemodContext::clear_gain() {
  gain_ = 0;
}
inline float DemodContext::gain() const {
  // @@protoc_insertion_point(field_get:DemodContext.gain)
  return gain_;
}
inline void DemodContext::set_gain(float value) {
  
  gain_ = value;
  // @@protoc_insertion_point(field_set:DemodContext.gain)
}

// -------------------------------------------------------------------

// GeneralMessage

// .GeneralMessage.Type type = 1;
inline void GeneralMessage::clear_type() {
  type_ = 0;
}
inline ::GeneralMessage_Type GeneralMessage::type() const {
  // @@protoc_insertion_point(field_get:GeneralMessage.type)
  return static_cast< ::GeneralMessage_Type >(type_);
}
inline void GeneralMessage::set_type(::GeneralMessage_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:GeneralMessage.type)
}

// string content = 2;
inline void GeneralMessage::clear_content() {
  content_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& GeneralMessage::content() const {
  // @@protoc_insertion_point(field_get:GeneralMessage.content)
  return content_.GetNoArena();
}
inline void GeneralMessage::set_content(const std::string& value) {
  
  content_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:GeneralMessage.content)
}
inline void GeneralMessage::set_content(std::string&& value) {
  
  content_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:GeneralMessage.content)
}
inline void GeneralMessage::set_content(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  content_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:GeneralMessage.content)
}
inline void GeneralMessage::set_content(const char* value, size_t size) {
  
  content_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:GeneralMessage.content)
}
inline std::string* GeneralMessage::mutable_content() {
  
  // @@protoc_insertion_point(field_mutable:GeneralMessage.content)
  return content_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* GeneralMessage::release_content() {
  // @@protoc_insertion_point(field_release:GeneralMessage.content)
  
  return content_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void GeneralMessage::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  content_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:GeneralMessage.content)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ScannerContext_State> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ScannerContext_State>() {
  return ::ScannerContext_State_descriptor();
}
template <> struct is_proto_enum< ::GeneralMessage_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::GeneralMessage_Type>() {
  return ::GeneralMessage_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_context_2eproto
