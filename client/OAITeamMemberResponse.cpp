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

#include "OAITeamMemberResponse.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace dc_rest {

OAITeamMemberResponse::OAITeamMemberResponse(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAITeamMemberResponse::OAITeamMemberResponse() {
    this->initializeModel();
}

OAITeamMemberResponse::~OAITeamMemberResponse() {}

void OAITeamMemberResponse::initializeModel() {

    m_user_isSet = false;
    m_user_isValid = false;

    m_team_id_isSet = false;
    m_team_id_isValid = false;

    m_membership_state_isSet = false;
    m_membership_state_isValid = false;
}

void OAITeamMemberResponse::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAITeamMemberResponse::fromJsonObject(QJsonObject json) {

    m_user_isValid = ::dc_rest::fromJsonValue(m_user, json[QString("user")]);
    m_user_isSet = !json[QString("user")].isNull() && m_user_isValid;

    m_team_id_isValid = ::dc_rest::fromJsonValue(m_team_id, json[QString("team_id")]);
    m_team_id_isSet = !json[QString("team_id")].isNull() && m_team_id_isValid;

    m_membership_state_isValid = ::dc_rest::fromJsonValue(m_membership_state, json[QString("membership_state")]);
    m_membership_state_isSet = !json[QString("membership_state")].isNull() && m_membership_state_isValid;
}

QString OAITeamMemberResponse::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAITeamMemberResponse::asJsonObject() const {
    QJsonObject obj;
    if (m_user.isSet()) {
        obj.insert(QString("user"), ::dc_rest::toJsonValue(m_user));
    }
    if (m_team_id_isSet) {
        obj.insert(QString("team_id"), ::dc_rest::toJsonValue(m_team_id));
    }
    if (m_membership_state_isSet) {
        obj.insert(QString("membership_state"), ::dc_rest::toJsonValue(m_membership_state));
    }
    return obj;
}

OAIUserResponse OAITeamMemberResponse::getUser() const {
    return m_user;
}
void OAITeamMemberResponse::setUser(const OAIUserResponse &user) {
    m_user = user;
    m_user_isSet = true;
}

bool OAITeamMemberResponse::is_user_Set() const{
    return m_user_isSet;
}

bool OAITeamMemberResponse::is_user_Valid() const{
    return m_user_isValid;
}

QString OAITeamMemberResponse::getTeamId() const {
    return m_team_id;
}
void OAITeamMemberResponse::setTeamId(const QString &team_id) {
    m_team_id = team_id;
    m_team_id_isSet = true;
}

bool OAITeamMemberResponse::is_team_id_Set() const{
    return m_team_id_isSet;
}

bool OAITeamMemberResponse::is_team_id_Valid() const{
    return m_team_id_isValid;
}

qint32 OAITeamMemberResponse::getMembershipState() const {
    return m_membership_state;
}
void OAITeamMemberResponse::setMembershipState(const qint32 &membership_state) {
    m_membership_state = membership_state;
    m_membership_state_isSet = true;
}

bool OAITeamMemberResponse::is_membership_state_Set() const{
    return m_membership_state_isSet;
}

bool OAITeamMemberResponse::is_membership_state_Valid() const{
    return m_membership_state_isValid;
}

bool OAITeamMemberResponse::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_team_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_membership_state_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAITeamMemberResponse::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_user_isValid && m_team_id_isValid && m_membership_state_isValid && true;
}

} // namespace dc_rest
