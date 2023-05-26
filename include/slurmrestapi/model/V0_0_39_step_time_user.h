/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_39_step_time_user.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_time_user_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_time_user_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  V0_0_39_step_time_user
    : public ModelBase
{
public:
    V0_0_39_step_time_user();
    virtual ~V0_0_39_step_time_user();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_step_time_user members

    /// <summary>
    /// 
    /// </summary>
    int32_t getMicroseconds() const;
    bool microsecondsIsSet() const;
    void unsetMicroseconds();

    void setMicroseconds(int32_t value);


protected:
    int32_t m_Microseconds;
    bool m_MicrosecondsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_39_step_time_user_H_ */
