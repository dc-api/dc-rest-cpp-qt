/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAIThreadSearchResponse.h
 *
 * 
 */

#ifndef OAIThreadSearchResponse_H
#define OAIThreadSearchResponse_H

#include <QJsonObject>

#include "OAIMessageResponse.h"
#include "OAIThreadMemberResponse.h"
#include "OAIThreadResponse.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {
class OAIThreadResponse;
class OAIThreadMemberResponse;
class OAIMessageResponse;

class OAIThreadSearchResponse : public OAIObject {
public:
    OAIThreadSearchResponse();
    OAIThreadSearchResponse(QString json);
    ~OAIThreadSearchResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIThreadResponse> getThreads() const;
    void setThreads(const QList<OAIThreadResponse> &threads);
    bool is_threads_Set() const;
    bool is_threads_Valid() const;

    QList<OAIThreadMemberResponse> getMembers() const;
    void setMembers(const QList<OAIThreadMemberResponse> &members);
    bool is_members_Set() const;
    bool is_members_Valid() const;

    bool isHasMore() const;
    void setHasMore(const bool &has_more);
    bool is_has_more_Set() const;
    bool is_has_more_Valid() const;

    QList<OAIMessageResponse> getFirstMessages() const;
    void setFirstMessages(const QList<OAIMessageResponse> &first_messages);
    bool is_first_messages_Set() const;
    bool is_first_messages_Valid() const;

    qint32 getTotalResults() const;
    void setTotalResults(const qint32 &total_results);
    bool is_total_results_Set() const;
    bool is_total_results_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIThreadResponse> m_threads;
    bool m_threads_isSet;
    bool m_threads_isValid;

    QList<OAIThreadMemberResponse> m_members;
    bool m_members_isSet;
    bool m_members_isValid;

    bool m_has_more;
    bool m_has_more_isSet;
    bool m_has_more_isValid;

    QList<OAIMessageResponse> m_first_messages;
    bool m_first_messages_isSet;
    bool m_first_messages_isValid;

    qint32 m_total_results;
    bool m_total_results_isSet;
    bool m_total_results_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIThreadSearchResponse)

#endif // OAIThreadSearchResponse_H
