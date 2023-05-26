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
 * Dbv0_0_37_job_exit_code.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_exit_code_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_exit_code_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/Dbv0_0_37_job_exit_code_signal.h"
#include <cpprest/details/basic_types.h>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class Dbv0_0_37_job_exit_code_signal;

/// <summary>
/// 
/// </summary>
class  Dbv0_0_37_job_exit_code
    : public ModelBase
{
public:
    Dbv0_0_37_job_exit_code();
    virtual ~Dbv0_0_37_job_exit_code();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Dbv0_0_37_job_exit_code members

    /// <summary>
    /// Job exit status
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);

    /// <summary>
    /// Return code from parent process
    /// </summary>
    int32_t getReturnCode() const;
    bool returnCodeIsSet() const;
    void unsetReturn_code();

    void setReturnCode(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Dbv0_0_37_job_exit_code_signal> getSignal() const;
    bool signalIsSet() const;
    void unsetSignal();

    void setSignal(const std::shared_ptr<Dbv0_0_37_job_exit_code_signal>& value);


protected:
    utility::string_t m_Status;
    bool m_StatusIsSet;
    int32_t m_Return_code;
    bool m_Return_codeIsSet;
    std::shared_ptr<Dbv0_0_37_job_exit_code_signal> m_Signal;
    bool m_SignalIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_Dbv0_0_37_job_exit_code_H_ */
