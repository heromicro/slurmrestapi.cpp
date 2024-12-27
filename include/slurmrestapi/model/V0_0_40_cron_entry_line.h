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
 * V0_0_40_cron_entry_line.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_cron_entry_line_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_cron_entry_line_H_


#include "slurmrestapi/ModelBase.h"


namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_40_cron_entry_line
    : public ModelBase
{
public:
    V0_0_40_cron_entry_line();
    virtual ~V0_0_40_cron_entry_line();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_cron_entry_line members

    /// <summary>
    /// Start of this entry in file
    /// </summary>
    int32_t getStart() const;
    bool startIsSet() const;
    void unsetStart();

    void setStart(int32_t value);

    /// <summary>
    /// End of this entry in file
    /// </summary>
    int32_t getEnd() const;
    bool endIsSet() const;
    void unsetEnd();

    void setEnd(int32_t value);


protected:
    int32_t m_Start;
    bool m_StartIsSet;
    int32_t m_End;
    bool m_EndIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_cron_entry_line_H_ */
