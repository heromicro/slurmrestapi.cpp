/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_37_error.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_error_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_error_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  V0_0_37_error
    : public ModelBase
{
public:
    V0_0_37_error();
    virtual ~V0_0_37_error();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_37_error members

    /// <summary>
    /// error message
    /// </summary>
    utility::string_t getError() const;
    bool errorIsSet() const;
    void unsetError();

    void setError(const utility::string_t& value);

    /// <summary>
    /// error number
    /// </summary>
    int32_t getErrno() const;
    bool errnoIsSet() const;
    void unsetErrno();

    void setErrno(int32_t value);


protected:
    utility::string_t m_Error;
    bool m_ErrorIsSet;
    int32_t m_Errno;
    bool m_ErrnoIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_error_H_ */
