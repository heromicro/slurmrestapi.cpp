/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_40_step_time_total.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_step_time_total_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_step_time_total_H_


#include "slurmrestapi/ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_step_time_total
    : public ModelBase
{
public:
    V0_0_40_step_time_total();
    virtual ~V0_0_40_step_time_total();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_step_time_total members

    /// <summary>
    /// Total CPU time used by the step in seconds
    /// </summary>
    int64_t getSeconds() const;
    bool secondsIsSet() const;
    void unsetSeconds();

    void setSeconds(int64_t value);

    /// <summary>
    /// Total CPU time used by the step in microseconds
    /// </summary>
    int32_t getMicroseconds() const;
    bool microsecondsIsSet() const;
    void unsetMicroseconds();

    void setMicroseconds(int32_t value);


protected:
    int64_t m_Seconds;
    bool m_SecondsIsSet;
    int32_t m_Microseconds;
    bool m_MicrosecondsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_step_time_total_H_ */
