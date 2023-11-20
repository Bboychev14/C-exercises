#define FORBID_COPY_ASSIGN_MOVE(TypeName) \
    TypeName(const TypeName&) = delete; \
    TypeName& operator=(const TypeName&) = delete; \
    TypeName(TypeName&&) = delete; \
    TypeName& operator=(TypeName&&) = delete;